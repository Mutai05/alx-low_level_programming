#include "lists.h"

/**
 * find_listint_loop - Finds the start of a loop in a linked list (if exists).
 * @head: A pointer to the head of the list.
 *
 * Return: The address of the node where the loop starts, or NULL if there is
 *         no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head, *fast = head;

	if (head == NULL)
		return (NULL);

	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;        /* Move one step at a time */
		fast = fast->next->next;  /* Move two steps at a time */

		/* If slow and fast meet, there's a loop */
		if (slow == fast)
		{
			/* Move slow to the beginning and keep fast where it is */
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow); /* Both pointers now meet at the start of the loop */
		}
	}

	return (NULL); /* No loop found */
}
