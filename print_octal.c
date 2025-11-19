#include "main.h"

/**
 * print_octal_rec - recursive helper to print octal number
 * @n: number to print
 *
 * Return: number of characters printed
 */
int print_octal_rec(unsigned int n)
{
	int count = 0;

	if (n / 8)
		count += print_octal_rec(n / 8);

	count += _putchar((n % 8) + '0');
	return (count);
}

/**
 * print_octal - prints an unsigned int in octal format
 * @args: argument list
 *
 * Return: number of characters printed
 */
int print_octal(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);

	if (n == 0)
		return (_putchar('0'));

	return (print_octal_rec(n));
}
