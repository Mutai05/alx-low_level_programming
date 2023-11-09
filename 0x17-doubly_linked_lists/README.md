Below is an example of how you can structure your code. Note that this is just a starting point, and you may need to expand on these functions based on your specific requirements.

### lists.h
```c
#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

/* Function prototypes */
size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

#endif /* LISTS_H */
```

### print_dlistint.c
```c
#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Print all elements of a doubly linked list
 * @h: Pointer to the head of the list
 * Return: Number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        printf("%d\n", h->n);
        h = h->next;
        count++;
    }

    return count;
}
```

### dlistint_len.c
```c
#include "lists.h"

/**
 * dlistint_len - Calculate the length of a doubly linked list
 * @h: Pointer to the head of the list
 * Return: Number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        h = h->next;
        count++;
    }

    return count;
}
```

### add_dnodeint.c
```c
#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - Add a new node at the beginning of a doubly linked list
 * @head: Pointer to the head of the list
 * @n: Value to be inserted in the new node
 * Return: Address of the new node, or NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new_node;

    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return NULL;

    new_node->n = n;
    new_node->prev = NULL;
    new_node->next = *head;

    if (*head != NULL)
        (*head)->prev = new_node;

    *head = new_node;

    return new_node;
}
```

### add_dnodeint_end.c
```c
#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - Add a new node at the end of a doubly linked list
 * @head: Pointer to the head of the list
 * @n: Value to be inserted in the new node
 * Return: Address of the new node, or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new_node, *temp;

    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return NULL;

    new_node->n = n;
    new_node->next = NULL;

    if (*head == NULL)
    {
        new_node->prev = NULL;
        *head = new_node;
    }
    else
    {
        temp = *head;
        while (temp->next != NULL)
            temp = temp->next;

        temp->next = new_node;
        new_node->prev = temp;
    }

    return new_node;
}
```

### delete_dnodeint_at_index.c
```c
#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete a node at a given index in a doubly linked list
 * @head: Pointer to the head of the list
 * @index: Index of the node to be deleted
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current, *prev;
    unsigned int i;

    if (*head == NULL)
        return -1;

    current = *head;

    if (index == 0)
    {
        *head = current->next;
        if (*head != NULL)
            (*head)->prev = NULL;
        free(current);
        return 1;
    }

    for (i = 0; i < index && current != NULL; i++)
    {
        prev = current;
        current = current->next;
    }

    if (current == NULL)
        return -1;

    prev->next = current->next;
    if (current->next != NULL)
        current->next->prev = prev;

    free(current);

    return 1;
}
```

These are basic implementations of the functions you might need for a doubly linked list in C. Adjust them according to your specific project requirements and constraints. Remember to thoroughly test your functions and handle edge cases appropriately.
