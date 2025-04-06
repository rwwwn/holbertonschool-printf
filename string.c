#include "main.h"
/**
 * handle_string - handles %s specifier
 * @args: va_list
 * Return: number of characters printed
 */
int handle_string(va_list args)
{
char *str = va_arg(args, char *);
int i = 0;
if (!str)
str = "(null)";
while (str[i])
_putchar(str[i++]);
return (i);
}
