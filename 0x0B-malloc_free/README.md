# Using malloc and free in C

This guide provides a brief overview of how to use the `malloc` and `free` functions in C for dynamic memory allocation and deallocation.

## Table of Contents

- [Introduction](#introduction)
- [Memory Allocation with malloc](#memory-allocation-with-malloc)
- [Memory Deallocation with free](#memory-deallocation-with-free)
- [Example](#example)
- [Best Practices](#best-practices)
- [Contributing](#contributing)
- [License](#license)

## Introduction

In C programming, the `malloc` function is used to dynamically allocate memory on the heap. This allows you to allocate memory at runtime, which is especially useful when you don't know the exact size of data you need to store. On the other hand, the `free` function is used to deallocate previously allocated memory to prevent memory leaks.

## Memory Allocation with malloc

To allocate memory using `malloc`, you need to specify the number of bytes you want to allocate. It returns a pointer to the first byte of the allocated memory.

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;

    // Allocate memory for an integer array of size 5
    arr = (int *)malloc(5 * sizeof(int));

    if (arr == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        exit(1);
    }

    // Use the allocated memory

    // Don't forget to free the memory when done
    free(arr);

    return 0;
}
