# holbertonschool-low_level_programming

This repository gathers my C learning projects at Holberton School.  
It follows a progressive path from the very first steps (compilation, basic I/O) to control flow, functions, and nested loops—respecting Betty style and Holberton constraints.

## Table of Contents
- [Description](#description)
- [Learning Objectives](#learning-objectives)
- [Requirements](#requirements)
- [Repository Structure](#repository-structure)
- [Projects](#projects)
  - [Project 0: C - Hello, World](#project-0-c---hello-world)
  - [Project 1: C - Variables, if, else, while](#project-1-c---variables-if-else-while)
  - [Project 2: C - Functions, nested loops](#project-2-c---functions-nested-loops)
- [Author](#author)

## Description
Low-level programming exercises in C. Each project folder contains tasks with source files and an individual `README.md` describing what each file does, how it’s compiled, and specific constraints.

## Learning Objectives
Across the projects in this repo:
- Understand the C toolchain: preprocessing, compilation, assembly, linking
- Use standard types, variables, operators, control flow, and loops
- Write and use functions, prototypes, and headers
- Format output with allowed tools (`_putchar` or `printf` when permitted)
- Follow Holberton’s Betty style and project constraints

## Requirements
- OS: Ubuntu 20.04 LTS
- Compiler: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
- Editors: `vi`, `vim`, `emacs`
- All files end with a new line
- No warnings or errors during compilation
- Code style: Betty (`betty-style.pl`, `betty-doc.pl`)

## Repository Structure
```
holbertonschool-low_level_programming/
├── README.md
├── hello_world/
│   └── README.md
├── variables_if_else_while/
│   └── README.md
└── functions_nested_loops/
    └── README.md
```

## Projects

### Project 0: C - Hello, World
Intro to the C toolchain and first programs:
- Preprocessing, compiling without linking, assembly output, executable naming
- Printing with `puts`/`printf`
- Displaying sizes of types with `sizeof`
- Advanced: Intel syntax assembly; printing to `stderr` without `printf`/`puts`

See: `hello_world/README.md`

---

### Project 1: C - Variables, if, else, while
Core language features and control flow:
- Random numbers, conditionals, last digit logic
- Printing alphabets and digits with `putchar` (constraints)
- Base 16, reverse alphabet, combinations
- Advanced: digit combinations with strict `putchar` limits

See: `variables_if_else_while/README.md`

---

### Project 2: C - Functions, nested loops
Encapsulation and iteration patterns:
- User-defined functions, prototypes, header usage (`main.h`)
- Character checks, sign printing, absolute value
- Last digit, minutes of the day, times tables
- Summations and Fibonacci exercises (advanced)

See: `functions_nested_loops/README.md`

## Author
**Félix Besançon**  
Software Engineering Student @ Holberton School  
📧 f.besancon@hotmail.fr  
🔗 https://github.com/FelixBesancon
