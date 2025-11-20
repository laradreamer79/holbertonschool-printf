#include "main.h"

int print_reverse(char *str)
{
    int len = 0, i;

    if (str == NULL)
        return print_string("(null)");

    while (str[len] != '\0')
        len++;

    for (i = len - 1; i >= 0; i--)
        _putchar(str[i]);

    return len;
}
