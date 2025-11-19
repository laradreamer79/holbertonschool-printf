#include "main.h"

/**
 * print_binary_rec - recursive helper to print binary number
 * @n: number to print
 *
 * Return: number of characters printed
 */
int print_binary_rec(unsigned int n)
{
	int count = 0;

	if (n / 2)
		count += print_binary_rec(n / 2);

	count += _putchar((n % 2) + '0');
	return (count);
}

/**
 * print_binary - prints an unsigned int in binary format
 * @args: argument list
 *
 * Return: number of characters printed
 */
int print_binary(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);

	if (n == 0)
		return (_putchar('0'));

	return (print_binary_rec(n));
}
