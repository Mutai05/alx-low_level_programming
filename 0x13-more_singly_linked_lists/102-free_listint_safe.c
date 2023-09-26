#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t linked list safely.
 * @h: A pointer to a pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h, *next_node;
	size_t count = 0;

	while (current != NULL)
	{
		count++;
		next_node = current->next;
		free(current);
		current = next_node;

		if (current >= next_node)
			break;
	}

	*h = NULL;
	return (count);
}
