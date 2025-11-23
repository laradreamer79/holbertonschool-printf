#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
int _printf(const char *format, ...);
int _putchar(char c);
int print_string(char *str);
int print_number(int n);
int print_binary(va_list args);
int print_binary_rec(unsigned int n);
int print_unsigned(va_list args);
int print_octal(va_list args);
int print_hex_lower(va_list args);
int print_hex_upper(va_list args);
int print_S(char *s);
int print_pointer(va_list args);
int print_reverse(char *str);
int print_rot13(va_list args);
#endif
