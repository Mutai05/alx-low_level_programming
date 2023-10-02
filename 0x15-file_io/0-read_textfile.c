#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
    ssize_t bytes_read, bytes_written;
    char *buffer;
    int file_descriptor;

    if (filename == NULL)
        return (0);

    buffer = malloc(sizeof(char) * letters);
    if (buffer == NULL)
        return (0);

    file_descriptor = open(filename, O_RDONLY);
    if (file_descriptor == -1)
    {
        free(buffer);
        return (0);
    }

    bytes_read = read(file_descriptor, buffer, letters);
    if (bytes_read == -1)
    {
        free(buffer);
        close(file_descriptor);
        return (0);
    }

    bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
    if (bytes_written == -1 || bytes_written != bytes_read)
    {
        free(buffer);
        close(file_descriptor);
        return (0);
    }

    free(buffer);
    close(file_descriptor);
    return (bytes_written);
}
