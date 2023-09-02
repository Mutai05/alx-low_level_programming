/**
 * _strcpy - Copies a string to another
 * @dest: The destination buffer
 * @src: The source string to copy
 *
 * Return: A pointer to the destination buffer `dest`.
 */
char *_strcpy(char *dest, char *src) {
    char *dest_ptr = dest;

    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return dest_ptr;
}
