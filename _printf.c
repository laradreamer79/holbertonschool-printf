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
<<<<<<< HEAD
if (*format == 'c')
i += _putchar(va_args(args, int));
else if (*format == 's')
i += print_s(va_args(args, char *));
=======
if(*format =='c')
i += _putchar(va_arg(args,int));
else if (*format == 's')
i += print_string(va_arg(args,char *));
>>>>>>> e8f7aaf0a1dc55abf4002a6380ae3dc6dc71a96f
else if (*format == '%')
i += _putchar('%');
else if (*format == 'd' || *format == 'i')
i += print_number(va_arg(args,int));
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
return (i);
}
