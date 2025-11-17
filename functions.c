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

<<<<<<< HEAD
/**
 * print_s - prints a string
 * @str: pointer to string
 *
 * Return: number of characters printed
 */
int print_s(char *str)
=======

int print_string(char *str)
>>>>>>> e8f7aaf0a1dc55abf4002a6380ae3dc6dc71a96f
{
    int i = 0;

    if (str == NULL)
        str = "(null)";
    while (*str)
        i += _putchar(*str++);
    return (i);
}
<<<<<<< HEAD
/**
 * print_num - prints an integer
 * @n: integer to print
 *
 * Return: number of characters printed
 */
int print_num(int n)
=======

int print_number(int n)
>>>>>>> e8f7aaf0a1dc55abf4002a6380ae3dc6dc71a96f
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
