# Custom printf in C

## Overview
This project implements a custom version of the C `printf` function called `_printf`.  
It can print characters, strings, numbers, and the percent sign.

Supported format specifiers:

- `%c` → character  
- `%s` → string
- `%d` / `%i` → signed integer  
- `%%` → percent sign
- `%b` → unsigned int printed in binary
- `%u` → unsigned integer
- `%o` → unsigned octal
- `%x` → unsigned hexadecimal (lowercase)
- `%X` → unsigned hexadecimal (uppercase)
- `%S` → string with non-printable chars shown as `\xHH`
- `%r` → reversed string
- `%R` → ROT13-encoded string
- `%p` → pointer address
---

## Files

| File           | Description |
|----------------|-------------|
| `_printf.c`    | Contains the main `_printf` function that handles format strings. |
| `functions.c`  | Contains helper functions: `_putchar`, `print_string`, `print_number`. |
| `main.h`       | Header file with function prototypes and necessary includes. |
| `print_binary.c` | Handles `%b` conversion (binary). |
| `print_unsigned.c` | Handles `%u` conversion. |
| `print_octal.c` | Handles `%o` conversion. |
| `print_hex.c` | Handles `%x` and `%X` conversions. |
| `print_S.c` | Handles `%S` conversion (non-printable characters). |
| `print_r.c` | Handles `%r` reversed string conversion. |
| `print_R.c` | Handles `%R` ROT13 string conversion. |
| `print_p.c` | Handles `%p` pointer conversion. |
| `buffered_putchar` (inside `functions.c`) | Implements 1024-byte buffer for minimal write() calls. |
---

## Project Architecture

_printf()
 ├── scans the format string
 ├── sends each specifier to the correct handler:
 │     ├── print_char      → %c
 │     ├── print_string    → %s
 │     ├── print_number    → %d / %i
 │     ├── print_binary    → %b
 │     ├── print_unsigned  → %u
 │     ├── print_octal     → %o
 │     ├── print_hex       → %x / %X
 │     ├── print_S         → %S
 │     ├── print_r         → %r
 │     ├── print_R         → %R
 │     └── print_p         → %p
 └── prints output through buffered _putchar

## Functions

### `_printf(const char *format, ...)`
- Prints text and values according to the format string.  
- Returns the number of characters printed.  
- Returns `-1` for invalid format strings.

### `_putchar(char c)`
- Prints a single character.  
- Returns `1` on success.

### `print_string(char *str)`
- Prints a string.  
- If the string is `NULL`, prints `(null)`.  

### `print_number(int n)`
- Prints an integer, handles negative numbers correctly.  
- Works with `INT_MIN` without errors.

### `print_S(char *str)`
- Prints a string.
- Non-printable characters are replaced with `\xHH` (uppercase hex, 2 digits).

### `print_binary(unsigned int n)`
- Prints the binary representation of an unsigned int.

### `print_r(char *str)`
- Prints the reversed version of a string.

### `print_R(char *str)`
- Prints the ROT13-encoded version of a string.

### `print_p(void *ptr)`
- Prints a pointer address in hexadecimal form.
---

## Example Usage
- Here is a simple program you can use to test the function:
```c
#include "main.h"

int main(void)
{
    _printf("Character: %c\n", 'A');
    _printf("String: %s\n", "Hello!");
    _printf("Number: %d\n", 42);
    _printf("Percent: %%\n");

    _printf("Binary: %b\n", 98);
    _printf("Unsigned: %u\n", 150);
    _printf("Octal: %o\n", 150);
    _printf("Hex (lower): %x\n", 255);
    _printf("Hex (upper): %X\n", 255);
    _printf("Reversed: %r\n", "Hello");
    _printf("Special S: %S\n", "Best\nSchool");
    _printf("Pointer: %p\n", (void *)0x1234);
    _printf("%R\n", "Hello World!");
 
}
```
- You can name the file {main.c} for example

## How to Compile

Use this command to compile all source files:

gcc -Wall -Wextra -Werror -pedantic -std=gnu89 *.c -o my_printf

Then run the program with:

./my_printf

## How It Works

1. `_printf` scans the format string.
2. Normal characters are printed immediately.
3. When `%` is found:
   - The next character determines the specifier.
   - The appropriate handler function is called.
4. Each handler writes output using `_putchar`.
5. The function returns the total number of printed characters.

## Manual Page
This project includes a custom man page named `man_3_printf.3`
that documents the behavior, usage, and supported specifiers
of the `_printf` function.

## Authors
- Lara Alzannan
- Haitham Alshehri

