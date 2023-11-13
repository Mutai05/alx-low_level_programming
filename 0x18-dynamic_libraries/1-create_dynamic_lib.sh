#!/bin/bash

# Compile all .c files into object files
gcc -c -fPIC *.c

# Create the dynamic library liball.so
gcc -shared -o liball.so *.o

# Clean up: remove the object files
rm -f *.o
