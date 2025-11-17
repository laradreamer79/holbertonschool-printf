#include "main.h"

/**
 * _printf - Produces output according to a format
 * @format: Pointer to format string
 *
 * Return: Number of characters printed, or -1 on error
 */

int _printf(const char *format, ...)
{
va_list args;
int i = 0;
if (!format || (format[0] == '%' && format[1] == '\0'))
return (-1);
va_start(args, format);
while (*format)
{
if (*format == '%')
{
format++;
if (*format == 'c')
i += _putchar(va_args(args, int));
else if (*format == 's')
i += print_s(va_args(args, char *));
else if (*format == '%')
}
}


}
