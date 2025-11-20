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
	static char buffer[1024];
	static int index;
	int written = 1;

	if (c == -1 || index == 1024)
	{
		if (index > 0)
		{
			write(1, buffer, index);
			index = 0;
		}
	}

	if (c != -1)
	{
		buffer[index] = c;
		index++;
	}

	return (written);
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
long num = n;
if (num < 0)
{
i += _putchar('-');
num = -num;
}
if (num / 10)
i += print_number(num / 10);
i += _putchar((num % 10) + '0');
return (i);
}
