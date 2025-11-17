#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_string - prints a string to stdout
 * @str: The string to print
 *
 * Return: The number of characters printed
 */
int print_string(char *str)
{
    int i = 0;

    if (str == NULL)
        str = "(null)";
    while (*str)
        i += _putchar(*str++);
    return (i);
}
/**
 * print_number - prints an integer to stdout
 * @n: The integer to print
 *
 * Return: The number of characters printed
 */
int print_number(int n)
{
	int i = 0;
	if (n < 0)
	{
		i += _putchar('-');
		n = -n;
	}
	if (n / 10)
		i += print_number(n / 10);
	i += _putchar((n % 10) + '0');
	return (i);
}
