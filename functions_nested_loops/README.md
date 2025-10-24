# Project 2: C - Functions, nested loops

## Description
This project introduces user-defined functions, function prototypes, header files, and nested loops in C. You will practice writing small, reusable functions, managing scope, and formatting output using `_putchar` without relying on the standard I/O library.

## Learning Objectives
By the end of this project, you should be able to explain:
- What nested loops are and how to use them
- What a function is and how to call/use functions
- The difference between a declaration and a definition
- What a prototype is and why it matters
- Variable scope in C
- The purpose of the GCC flags `-Wall -Werror -Wextra -pedantic -std=gnu89`
- What header files are and how to use `#include`

## Requirements
- Allowed editors: `vi`, `vim`, `emacs`
- All files will be compiled on Ubuntu 20.04 LTS using: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`
- All files should end with a new line
- A `README.md` at the root of the project folder is mandatory
- Your code must follow the Betty style (`betty-style.pl`, `betty-doc.pl`)
- No global variables
- No more than 5 functions per file
- You are **not** allowed to use the standard library (`printf`, `puts`, …)
- You are allowed to use `_putchar`
- Do not push `_putchar.c` (a checker-provided version will be used)
- Prototypes of all functions and of `_putchar` must be in `main.h`

## Files

| File | Description |
|------|-------------|
| `0-putchar.c` | Program that prints `_putchar` followed by a newline. |
| `1-alphabet.c` | Function `void print_alphabet(void);` that prints the lowercase alphabet, followed by a newline (uses `_putchar` twice). |
| `2-print_alphabet_x10.c` | Function `void print_alphabet_x10(void);` that prints the alphabet 10 times in lowercase, each followed by a newline. |
| `3-islower.c` | Function `int _islower(int c);` returns 1 if `c` is lowercase, otherwise 0. |
| `4-isalpha.c` | Function `int _isalpha(int c);` returns 1 if `c` is a letter (lowercase or uppercase), otherwise 0. |
| `5-sign.c` | Function `int print_sign(int n);` prints the sign of `n` and returns 1 (positive), 0 (zero), or -1 (negative). |
| `6-abs.c` | Function `int _abs(int);` that computes the absolute value of an integer. |
| `7-print_last_digit.c` | Function `int print_last_digit(int);` that prints and returns the last digit of a number. |
| `8-24_hours.c` | Function `void jack_bauer(void);` that prints every minute of the day from 00:00 to 23:59. |
| `9-times_table.c` | Function `void times_table(void);` that prints the 9 times table starting with 0 (formatted as in the example). |
| `10-add.c` | Function `int add(int, int);` that returns the sum of two integers. |
| `11-print_to_98.c` | Function `void print_to_98(int n);` that prints all natural numbers from `n` to 98, separated by `, `, ending with a newline. |
| `100-times_table.c` | **Advanced** — Function `void print_times_table(int n);` that prints the `n` times table (0 ≤ n ≤ 15), formatted as in the example. |
| `101-natural.c` | **Advanced** — Program that computes and prints the sum of all multiples of 3 or 5 below 1024 (excluded). |
| `102-fibonacci.c` | **Advanced** — Program that prints the first 50 Fibonacci numbers starting with 1 and 2, separated by `, `. |
| `103-fibonacci.c` | **Advanced** — Program that finds and prints the sum of the even-valued Fibonacci terms not exceeding 4,000,000. |
| `104-fibonacci.c` | **Advanced** — Program that prints the first 98 Fibonacci numbers starting with 1 and 2, separated by `, `, without using `long long`, arrays, pointers, or external libs. |

## Author
**Félix Besançon**  
Software Engineering Student @ Holberton School  
📧 f.besancon@hotmail.fr  
🔗 https://github.com/FelixBesancon
