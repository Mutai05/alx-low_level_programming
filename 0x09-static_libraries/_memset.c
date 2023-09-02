/**
 * _memset - Fills memory with a constant byte
 * @s: The pointer to the memory area to be filled
 * @b: The constant byte to fill the memory with
 * @n: The number of bytes to fill
 *
 * Return: A pointer to the memory area `s`.
 */
char *_memset(char *s, char b, unsigned int n) {
    unsigned int i;

    for (i = 0; i < n; i++) {
        s[i] = b;
    }

    return s;
}
