/**
 * _strncpy - Copies at most n bytes of source to destination
 * @dest: The destination string
 * @src: The source string to copy from
 * @n: The maximum number of bytes to copy
 *
 * Return: A pointer to the destination string `dest`.
 */
char *_strncpy(char *dest, char *src, int n) {
    int i;

    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }

    for (; i < n; i++) {
        dest[i] = '\0';
    }

    return dest;
}
