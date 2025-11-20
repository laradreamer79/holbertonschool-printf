#include "main.h"

/**
 * print_S - prints a string with non-printable chars in \xXX format
 * @s: string to print
 *
 * Return: number of characters printed
 */
int print_S(char *s)
{
	int i = 0, count = 0;
	char c;
	char hex[3];

	if (s == NULL)
		return (print_string("(null)"));

	while (s[i])
	{
		c = s[i];

		if ((c > 0 && c < 32) || c >= 127) /* Non-printable */
		{
			_putchar('\\');
			_putchar('x');

			hex[0] = "0123456789ABCDEF"[((unsigned char)c >> 4) & 0xF];
			hex[1] = "0123456789ABCDEF"[(unsigned char)c & 0xF];
			hex[2] = '\0';

			_putchar(hex[0]);
			_putchar(hex[1]);
			count += 4;
		}
		else
		{
			_putchar(c);
			count++;
		}
		i++;
	}

	return (count);
	
}
