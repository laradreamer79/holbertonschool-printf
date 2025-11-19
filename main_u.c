#include <stdio.h>
#include "main.h"

/**
 * main - compare _printf and printf for %u
 *
 * Return: Always 0
 */
int main(void)
{
	_printf("%u", 1024);
	printf("%u", 1024);
	return (0);
}
