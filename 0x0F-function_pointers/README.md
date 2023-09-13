# Function Pointers in C

This repository provides a basic overview and examples of how to use function pointers in C. Function pointers are a powerful feature of the C language that allows you to store and call functions dynamically. Understanding how to use them can be very useful for various programming tasks.

## Table of Contents

- [Introduction](#introduction)
- [Usage](#usage)
- [Getting Started](#getting-started)
- [Compilation](#compilation)
- [Contributing](#contributing)
- [License](#license)

## Introduction

In C, function pointers are variables that can store addresses of functions. They allow you to call functions indirectly, providing flexibility and enabling dynamic function selection at runtime. This README will guide you through the basics of using function pointers.

## Usage

Below are some code examples demonstrating the use of function pointers:

```c
#include <stdio.h>

// Define two functions with the same signature
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int main() {
    // Declare a function pointer
    int (*operation)(int, int);

    // Assign the address of 'add' to the function pointer
    operation = add;

    // Call 'add' using the function pointer
    int result = operation(5, 3);
    printf("Result: %d\n", result);  // Output: Result: 8

    // Reassign the function pointer to 'subtract'
    operation = subtract;

    // Call 'subtract' using the function pointer
    result = operation(5, 3);
    printf("Result: %d\n", result);  // Output: Result: 2

    return 0;
}
