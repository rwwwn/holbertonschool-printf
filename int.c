#include "main.h"

/**
 * handle_int - handles %d and %i specifiers
 * @args: list of arguments
 *
 * Return: number of characters printed
 */
int handle_int(va_list args)
{
int n, div, len = 0;
unsigned int num;

n = va_arg(args, int);

if (n < 0)
{
len += _putchar('-');
num = -n;
}
else
{
num = n;
}

div = 1;
while (num / div > 9)
div *= 10;

while (div != 0)
{
len += _putchar((num / div) +'0');
num %= div;
div /= 10;
}

return (len);
}
