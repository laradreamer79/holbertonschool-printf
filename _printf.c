#include "main.h"
/**
 * _printf - Produces output based on a format string
 * @format: A constant character pointer to the format string
 * Return: The total number of characters printed.
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
            switch (*format)
            {
                case 'c':
                    i += _putchar(va_arg(args, int));
                    break;

                case 's':
                    i += print_string(va_arg(args, char *));
                    break;

                case '%':
                    i += _putchar('%');
                    break;

                case 'd':
                case 'i':
                    i += print_number(va_arg(args, int));
                    break;

                default:
                    i += _putchar('%');
                    i += _putchar(*format);
            }
        }
        else
        {
            i += _putchar(*format);
        }
        format++;
    }

    va_end(args);
    return (i);
}
