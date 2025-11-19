#include "main.h"

/**
 * print_unsigned_rec - recursive helper to print unsigned integer
 * @n: number to print
 *
 * Return: number of characters printed
 */
int print_unsigned_rec(unsigned int n)
{
	int count = 0;

	if (n / 10)
		count += print_unsigned_rec(n / 10);

	count += _putchar((n % 10) + '0');
	return (count);
}

/**
 * print_unsigned - prints an unsigned integer
 * @args: argument list
 *
 * Return: number of characters printed
 */
int print_unsigned(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);

	if (n == 0)
		return (_putchar('0'));

	return (print_unsigned_rec(n));
}
