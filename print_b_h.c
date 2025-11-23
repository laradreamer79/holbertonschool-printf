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


/**
 * print_hex_rec - recursive helper to print hex number
 * @n: number to print
 * @upper: flag for uppercase (1) or lowercase (0)
 *
 * Return: number of characters printed
 */
int print_hex_rec(unsigned int n, int upper)
{
	char *hex = upper ? "0123456789ABCDEF" : "0123456789abcdef";
	int count = 0;

	if (n / 16)
		count += print_hex_rec(n / 16, upper);

	count += _putchar(hex[n % 16]);
	return (count);
}

/**
 * print_hex_lower - prints lowercase hexadecimal
 * @args: argument list
 *
 * Return: number of characters printed
 */
int print_hex_lower(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);

	if (n == 0)
		return (_putchar('0'));

	return (print_hex_rec(n, 0));
}

/**
 * print_hex_upper - prints uppercase hexadecimal
 * @args: argument list
 *
 * Return: number of characters printed
 */
int print_hex_upper(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);

	if (n == 0)
		return (_putchar('0'));

	return (print_hex_rec(n, 1));
}