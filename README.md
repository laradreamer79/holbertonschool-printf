# Custom printf in C

## Overview
This project implements a custom version of the C `printf` function called `_printf`.  
It can print characters, strings, numbers, and the percent sign.

Supported format specifiers:

- `%c` → character  
- `%s` → string
- `%d` / `%i` → signed integer  
- `%%` → percent sign

---

## Files

| File            | Description |
|-----------------|-------------|
| `_printf.c`     | Contains the main `_printf` function that handles format strings. |
| `functions.c`   | Contains helper functions: `_putchar`, `print_string`, `print_number`. |
| `main.h`        | Header file with function prototypes and necessary includes. |
---

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

---

## Example Usage
- Here is a simple program you can use to test the function:

#include "main.h"

int main(void)
{
    _printf("Character: %c\n", 'A');
    _printf("String: %s\n", "Hello!");
    _printf("Number: %d\n", 42);
    _printf("Percent: %%\n");

    return 0;
}

- You can name the file {main.c} for example

## How to Compile

Make sure you include all C files when compiling:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _printf.c functions.c main.c -o my_printf

then run ./my_printf
