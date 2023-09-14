# Variadic Functions in C

This is a C programming project that demonstrates the usage of variadic functions. Variadic functions allow you to work with a variable number of arguments in a function.

## Prerequisites

Before you start, make sure you have the following:

- An environment with a C compiler (e.g., `gcc`)
- A text editor (e.g., `vi`, `vim`, `emacs`) for writing C code
- Basic knowledge of C programming

## Project Structure

The project is organized as follows:

- `variadic_functions.h`: Header file containing function prototypes.
- `variadic_functions.c`: Implementation of variadic functions.
- `main.c`: A sample `main.c` file for testing the functions (not required for submission).
- `README.md`: This README file.

## How to Use

1. Clone this repository to your local machine:

   ```bash
   git clone https://github.com/yourusername/variadic-functions.git

## Example

#include "variadic_functions.h"
#include <stdio.h>

int main() {
    int sum_result = sum_ints(4, 10, 20, 30, 40);
    printf("Sum of integers: %d\n", sum_result);

    print_strings(3, "Hello", "Variadic", "Functions");

    print_all("ciss", 'H', 123, "Hello");
    
    return 0;
}

Compile the code using gcc

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o variadic_functions

./variadic_functions
