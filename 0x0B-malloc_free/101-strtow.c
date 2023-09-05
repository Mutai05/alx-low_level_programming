#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * word_count - Counts the number of words in a string
 * @str: The string to count
 *
 * Return: The number of words
 */
int word_count(char *str)
{
	int i, count, flag;

	count = 0;
	flag = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			count++;
		}
	}
	return (count);
}

/**
 * word_len - Calculates the length of a word
 * @str: The string to measure
 *
 * Return: The length of the word
 */
int word_len(char *str)
{
	int len;

	len = 0;
	while (*str != ' ' && *str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

/**
 * strtow - Splits a string into words
 * @str: The string to split
 *
 * Return: A pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	char **tab;
	int i, j, k, w, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	w = word_count(str);
	if (w == 0)
		return (NULL);
	tab = malloc(sizeof(char *) * (w + 1));
	if (tab == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (i < w)
	{
		while (str[j] == ' ')
			j++;
		l = word_len(str + j);
		tab[i] = malloc(sizeof(char) * (l + 1));
		if (tab[i] == NULL)
		{
			while (i >= 0)
			{
				free(tab[i]);
				i--;
			}
			free(tab);
			return (NULL);
		}
		for (k = 0; k < l; k++)
			tab[i][k] = str[j + k];
		tab[i][k] = '\0';
		i++;
		j += l;
	}
	tab[i] = NULL;
	return (tab);
}

