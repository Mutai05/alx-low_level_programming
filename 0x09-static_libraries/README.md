# C Library Project

This project contains a C library with various functions that can be used in C programs. The library is compiled into a static library file (`libmy.a`) for easy integration into other programs.

## Table of Contents

- [Introduction](#introduction)
- [Functions](#functions)
- [Getting Started](#getting-started)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Introduction

In this project, we have created a C library (`libmy.a`) that contains a set of useful functions. These functions cover a range of tasks, from string manipulation to character checking and more.

## Functions

Here's a list of functions included in the library:

- `int _putchar(char c)`
- `int _islower(int c)`
- `int _isalpha(int c)`
- `int _abs(int n)`
- `int _isupper(int c)`
- `int _isdigit(int c)`
- `int _strlen(char *s)`
- `void _puts(char *s)`
- `char *_strcpy(char *dest, char *src)`
- `int _atoi(char *s)`
- `char *_strcat(char *dest, char *src)`
- `char *_strncat(char *dest, char *src, int n)`
- `char *_strncpy(char *dest, char *src, int n)`
- `int _strcmp(char *s1, char *s2)`
- `char *_memset(char *s, char b, unsigned int n)`
- `char *_memcpy(char *dest, char *src, unsigned int n)`
- `char *_strchr(char *s, char c)`
- `unsigned int _strspn(char *s, char *accept)`
- `char *_strpbrk(char *s, char *accept)`
- `char *_strstr(char *haystack, char *needle)`

## Getting Started

To use this library in your C program, you need to compile it into your project. Here are the steps to get started:

1. Clone this repository to your local machine.

2. Navigate to the directory where you want to use the library.

3. Copy `libmy.a` and `main.h` from this repository to your project directory.

4. Include the `main.h` header file in your C program to access the function prototypes.

5. Compile your program with the library using the following command:

   ```bash
   gcc -std=gnu89 main.c -L. -lmy -o your_program_name

