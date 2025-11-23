#include "main.h"

int print_rot13(va_list args)
{
    char *str = va_arg(args, char *);
    int count = 0;
    char c;

    if (str == NULL)
        str = "(null)";

    while (*str)
    {
        c = *str;

        if ((c >= 'A' && c <= 'Z'))
            c = ((c - 'A' + 13) % 26) + 'A';
        else if ((c >= 'a' && c <= 'z'))
            c = ((c - 'a' + 13) % 26) + 'a';

        count += _putchar(c);
        str++;
    }

    return (count);
}