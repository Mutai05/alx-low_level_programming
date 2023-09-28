# Bit Manipulation in C

This C programming project demonstrates various bit manipulation techniques using the C language. It includes examples of bitwise operations, such as AND, OR, XOR, NOT, left shift, and right shift. The code in this project adheres to specific coding guidelines.

## Table of Contents

- [Requirements](#requirements)
- [Project Structure](#project-structure)
- [Usage](#usage)
- [Coding Guidelines](#coding-guidelines)
- [Contributing](#contributing)
- [License](#license)

## Requirements

To compile and run the code in this project, you need the following:

- An environment where you can compile C code (e.g., GCC)
- A code editor of your choice (e.g., vi, vim, emacs)
- A system running Ubuntu 20.04 LTS

## Project Structure

The project includes the following files:

- `main.c`: Contains examples of bit manipulation operations.
- `main.h`: Header file with function prototypes.
- `bitmanipulation.c`: Implementation of bit manipulation functions.
- `bitmanipulation.h`: Header file for bit manipulation functions.
- `_putchar.c`: Implementation of a custom `_putchar` function.

## Usage

To compile and run the code:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.c bitmanipulation.c _putchar.c -o bitmanipulation
./bitmanipulation
