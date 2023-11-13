### Dynamic Libraries:

#### 1. What is a Dynamic Library?
A dynamic library, also known as a shared library, is a compiled binary file containing code and data that multiple programs can use simultaneously. Instead of including the library's code in the program during compile time (as with static libraries), dynamic linking allows the library to be loaded into memory at runtime.

#### 2. How does it work?
Dynamic linking involves the linking of a program with its required libraries during runtime rather than at compile time. When a program is run, the dynamic linker/loader loads the necessary dynamic libraries into memory, resolves symbols, and allows the program to access the functions and data within those libraries.

#### 3. How to create a Dynamic Library:
To create a dynamic library, you typically compile your source code with position-independent code (PIC) flags, such as `-fPIC` in GCC. For example:

```bash
gcc -shared -fPIC -o libexample.so example.c
```

This command compiles `example.c` into a shared library named `libexample.so`.

#### 4. How to use a Dynamic Library:
To use a dynamic library, you link your program against it during compilation. You can do this by specifying the library with the `-l` flag and its path with the `-L` flag:

```bash
gcc -o my_program my_program.c -lexample -L/path/to/library
```

### Environment Variable $LD_LIBRARY_PATH:

The `$LD_LIBRARY_PATH` environment variable is used to specify a list of directories where the dynamic linker should look for shared libraries before searching the standard directories. You can set it like this:

```bash
export LD_LIBRARY_PATH=/path/to/library:$LD_LIBRARY_PATH
```

### Differences between Static and Shared Libraries:

#### 1. Static Libraries:
- Compiled directly into the executable during the compilation phase.
- Increases the size of the executable.
- No runtime library loading overhead.
- Each program has its own copy of the library functions.

#### 2. Shared Libraries:
- Linked at runtime.
- Reduces the size of the executable.
- Incurs runtime library loading overhead.
- Multiple programs can share the same copy of the library in memory.

### Basic Usage: nm, ldd, ldconfig

#### 1. `nm` (Name Mangling):
`nm` is a command-line utility that displays the symbol table of an object file or a shared library. It shows the symbols (functions, variables) defined or used in a binary.

Example:
```bash
nm libexample.so
```

#### 2. `ldd` (List Dynamic Dependencies):
`ldd` is used to print the shared libraries required by an executable or shared library.

Example:
```bash
ldd my_program
```

#### 3. `ldconfig`:
`ldconfig` is a command that updates the shared library cache. It is often used after installing or removing shared libraries to ensure that the dynamic linker can find the updated libraries.

Example:
```bash
sudo ldconfig
```

These tools are essential for diagnosing and resolving issues related to dynamic libraries in a system.
