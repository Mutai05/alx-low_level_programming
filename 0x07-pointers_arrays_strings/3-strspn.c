/**
 * _strspn - gets the length of a prefix substring
 * @s: input string
 * @accept: set of bytes to check for in s
 *
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;
    int found;

    while (*s)
    {
        found = 0;
        while (*accept)
        {
            if (*s == *accept)
            {
                found = 1;
                break;
            }
            accept++;
        }
        if (found)
            count++;
        else
            break;

        s++;
        accept -= count;
    }

    return (count);
}
