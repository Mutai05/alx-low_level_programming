#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position in a list
 * @h: Pointer to the head of the list
 * @idx: Index where the new node should be inserted
 * @n: Data for the new node
 * Return: Address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node, *current;
    unsigned int count = 0;

    if (h == NULL)
        return NULL;

    if (idx == 0)
        return add_dnodeint(h, n); /* Insert at the beginning */

    current = *h;
    while (current != NULL && count < idx - 1)
    {
        current = current->next;
        count++;
    }

    if (current == NULL)
        return NULL; /* Cannot insert at the specified index */

    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return NULL; /* Allocation failure */

    new_node->n = n;
    new_node->prev = current;
    new_node->next = current->next;

    if (current->next != NULL)
        current->next->prev = new_node;

    current->next = new_node;

    return new_node;
}
