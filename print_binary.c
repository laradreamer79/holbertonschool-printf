#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: unsigned int
 *
 * Return: number of characters printed
 */
int print_binary(unsigned int n)
{
    int count = 0;
    unsigned int mask = 1 << 31; /* For 32-bit integer */
    int started = 0;

    if (n == 0)
    {
        _putchar('0');
        return (1);
    }

    while (mask > 0)
    {
        if (n & mask)
        {
            _putchar('1');
            count++;
            started = 1;
        }
        else if (started)
        {
            _putchar('0');
            count++;
        }
        mask >>= 1;
    }

    return (count);
}

