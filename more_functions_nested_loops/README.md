# Project 3: C - More functions, more nested loops

This project continues the exploration of C programming with a deeper focus on functions, nested loops, and modular code structure using headers. You will improve your ability to build reusable code and follow strict constraints like Betty style, no standard library, and limited use of _putchar.

## Table of Contents
- Description
- Learning Objectives
- Requirements
- Compilation
- Project Structure
- Tasks Overview
- Author

## Description
This project builds upon the previous C foundations by introducing more advanced function usage and control structures. It emphasizes writing clean, modular C code using custom functions and header files, as well as controlling output using `_putchar` only.

Each C file in this directory implements a specific function, and all function prototypes are declared in the `main.h` header.

## Learning Objectives
At the end of this project, you should be able to:
- Use nested loops effectively
- Define and call functions
- Understand the difference between function declaration and definition
- Explain what a function prototype is and why it is important
- Understand variable scope in C
- Use header files and the `#include` directive
- Compile with `gcc` using these flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`

## Requirements
- Allowed editors: `vi`, `vim`, `emacs`
- OS: Ubuntu 20.04 LTS
- Compiler: `gcc`
- All files must end with a new line
- Code must follow Betty style (`betty-style.pl`, `betty-doc.pl`)
- No global variables allowed
- No more than 5 functions per file
- No standard library functions (`printf`, `puts`, etc.) allowed
- You may use `_putchar`
- Prototypes must be included in `main.h`
- Push your header file

## Compilation
To compile any file from this project, use:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 file.c _putchar.c -o output

(Our graders will provide their own `_putchar.c`. You don’t have to push yours.)

## Project Structure
more_functions_nested_loops/
├── main.h
├── 0-isupper.c
├── 1-isdigit.c
├── 2-mul.c
├── 3-print_numbers.c
├── 4-print_most_numbers.c
├── 5-more_numbers.c
├── 6-print_line.c
├── 7-print_diagonal.c
├── 8-print_square.c
├── 9-fizz_buzz.c
├── 10-print_triangle.c
├── 100-prime_factor.c
└── 101-print_number.c

## Tasks Overview
- 0: Check for uppercase character
- 1: Check for digit (0 through 9)
- 2: Multiply two integers
- 3: Print numbers from 0 to 9
- 4: Print most numbers (without 2 and 4)
- 5: Print numbers 10 times from 0 to 14
- 6: Draw a straight line
- 7: Draw a diagonal line
- 8: Print a square
- 9: Fizz-Buzz
- 10: Print a triangle
- 100: Largest prime factor of 612852475143
- 101: Print integer with `_putchar` only

Detailed descriptions for each task are available in the project documentation.

## Author
**Félix Besançon**  
Software Engineering Student @ Holberton School  
📧 f.besancon@hotmail.fr  
🔗 https://github.com/FelixBesancon
