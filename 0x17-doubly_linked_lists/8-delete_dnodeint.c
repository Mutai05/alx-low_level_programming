#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at index index of a dlistint_t list
 * @head: Pointer to the head of the list
 * @index: Index of the node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current;
    unsigned int count = 0;

    if (head == NULL || *head == NULL)
        return -1; /* Empty list */

    current = *head;

    if (index == 0)
    {
        *head = (*head)->next;
        if (*head != NULL)
            (*head)->prev = NULL;
        free(current);
        return 1;
    }

    while (current != NULL && count < index)
    {
        current = current->next;
        count++;
    }

    if (current == NULL)
        return -1; /* Index out of bounds */

    if (current->next != NULL)
        current->next->prev = current->prev;

    current->prev->next = current->next;

    free(current);

    return 1;
}
