#include <stddef.h>

/**
 * _strstr - Locates a substring
 * @haystack: The string to search in
 * @needle: The substring to search for
 *
 * Return: A pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle) {
    while (*haystack) {
        char *start = haystack;
        char *substr = needle;

        while (*substr && *haystack && *substr == *haystack) {
            substr++;
            haystack++;
        }

        if (*substr == '\0') {
            return start;
        }

        haystack = start + 1;
    }

    return NULL;
}
