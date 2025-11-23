#include "main.h"
#include <stdint.h>

/**
 * print_pointer - prints a pointer address in hexadecimal (0x...)
 * @args: argument list
 *
 * Return: number of characters printed
 */
int print_pointer(va_list args)
{
    uintptr_t ptr = (uintptr_t)va_arg(args, void *);
    char hex[20];
    char *symbols = "0123456789abcdef";
    int i = 0, len = 0;

    if (ptr == 0)
        return (print_string("(nil)"));

    while (ptr)
    {
        hex[len++] = symbols[ptr % 16];
        ptr /= 16;
    }

    i += _putchar('0');
    i += _putchar('x');

    while (len--)
        i += _putchar(hex[len]);

    return (i);

}
