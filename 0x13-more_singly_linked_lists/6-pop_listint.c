#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: A pointer to a pointer to the head of the list.
 *
 * Return: The data (n) stored in the head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	/* Store the data from the head node */
	data = (*head)->n;

	/* Move the head pointer to the next node */
	temp = *head;
	*head = (*head)->next;

	/* Free the old head node */
	free(temp);

	return (data);
}
