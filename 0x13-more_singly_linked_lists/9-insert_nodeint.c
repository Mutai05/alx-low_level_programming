#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: A pointer to a pointer to the head of the list.
 * @idx: The index where the new node should be added. Index starts at 0.
 * @n: The integer value to be stored in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	unsigned int count = 0;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/* Set the value of the new node */
	new_node->n = n;

	/* If the index is 0, set the new node as the new head */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current = *head;
	/* Traverse the list to find the node at index - 1 */
	while (current != NULL && count < idx - 1)
	{
		current = current->next;
		count++;
	}

	/* If index is out of range, free the new node and return NULL */
	if (current == NULL || count < idx - 1)
	{
		free(new_node);
		return (NULL);
	}

	/* Insert the new node at the specified index */
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
