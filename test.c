#include "main.h"
#include <stdio.h>

/**
 * main - tests the custom _printf function
 *
 * Return: Always 0
 */
int main(void)
{
int x = 10;

	_printf("Testing characters: %c\n", 'A');
	_printf("Testing strings: %s\n", "Hello, world!");
	_printf("Testing integers: %d\n", 12345);
	_printf("Testing negative integers: %i\n", -9879891);
	_printf("Testing percent sign: %%\n");
_printf("\n");

	_printf("u: %u\n", 98);
	_printf("o: %o\n", 98);
	_printf("x: %x\n", 98);
	_printf("X: %X\n", 98);
_printf("\n");

	_printf("hi: %u\n", 1024);
_printf("\n");

_printf("Address: %p\n", &x);
_printf("\n");

_printf("%r", "Hello");
_printf("\n");

	return (0);
}
