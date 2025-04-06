#include "main.h"

/**
 * _printf - custom printf function
 * @format: format string
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
int i = 0, printed = 0;
va_list args;

if (!format)
return (-1);

va_start(args, format);

while (format[i])
{
if (format[i] == '%')
{
if (!format[i + 1])
{
va_end(args);
return (-1);
}
i++;
if (format[i] == 'c')
printed += handle_char(args);
else if (format[i] == 's')
printed += handle_string(args);
else if (format[i] == '%')
printed += handle_percent();
else
{
printed += _putchar('%');
printed += _putchar(format[i]);
}
}
else
{
printed += _putchar(format[i]);
}
i++;
}

va_end(args);
return (printed);
}
