/**
 * _strcmp - Compares two strings
 * @s1: The first string to compare
 * @s2: The second string to compare
 *
 * Return: 0 if the strings are equal, a negative value if s1 is less than s2,
 *         or a positive value if s1 is greater than s2.
 */
int _strcmp(char *s1, char *s2) {
    int i = 0;

    while (s1[i] == s2[i] && s1[i] != '\0') {
        i++;
    }

    return (s1[i] - s2[i]);
}
