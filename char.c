#include "main.h"

/**
 * print_char - prints a single character
 * @args: argument list
 *
 * Return: number of characters printed
 */
int print_char(va_list args)
{
char c;

c = va_arg(args, int);
return (_putchar(c));
}
