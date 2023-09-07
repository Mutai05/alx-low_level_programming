# Using malloc and free in C

In C programming, `malloc` and `free` are functions used for dynamic memory allocation and deallocation, respectively. This README provides a brief overview of how to use them effectively.

## `malloc` Function

The `malloc` (memory allocation) function is used to allocate a block of memory on the heap. It returns a pointer to the first byte of the allocated memory block. Here's how you can use it:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int size = 5;

    // Allocate memory for an integer array of size 5
    arr = (int *)malloc(size * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Now you can use 'arr' as an array
    arr[0] = 10;
    arr[1] = 20;
    // ...

    // Don't forget to free the allocated memory when done
    free(arr);

    return 0;
}
