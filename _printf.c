
#include "main.h"
/**
 * _printf - Produces output according to a format.
 * @format: The format string.
 * Return: The number of characters printed
 * (excluding the null byte used to end output to strings).
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
i += _putchar(va_arg(args, int));
else if (*format == 's')
i += print_string(va_arg(args, char *));
else if (*format == '%')
i += _putchar('%');
else if (*format == 'd' || *format == 'i')
i += print_number(va_arg(args, int));
else if (*format == 'b')
    i += print_binary(args);
else if (*format == 'u')
    i += print_unsigned(args);
else if (*format == 'o')
    i += print_octal(args);
else if (*format == 'x')
    i += print_hex_lower(args);
else if (*format == 'X')
    i += print_hex_upper(args);
else
{
    i += _putchar('%');
    i += _putchar(*format);
}

}
else
i += _putchar(*format);
format++;
}
va_end(args);
_putchar(-1); /* flush buffer */
return (i);
}
