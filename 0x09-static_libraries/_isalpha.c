/* _isalpha.c */
/**
 * _isalpha - Checks if a character is alphabetic
 * @c: The character to check
 *
 * Return: 1 if the character is alphabetic, 0 otherwise.
 */
int _isalpha(int c) {
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
