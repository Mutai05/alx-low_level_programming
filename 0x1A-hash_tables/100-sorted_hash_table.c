#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

hash_table_t *hash_table_create(unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_print_rev(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);

/**
 * hash_table_create - Creates a sorted hash table.
 * @size: The size of new sorted hash table.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new sorted hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *ht;
    unsigned long int i;

    ht = malloc(sizeof(hash_table_t));
    if (ht == NULL)
        return (NULL);

    ht->size = size;
    ht->array = malloc(sizeof(hash_node_t *) * size);
    if (ht->array == NULL)
        return (NULL);
    for (i = 0; i < size; i++)
        ht->array[i] = NULL;
    ht->head = NULL;
    ht->tail = NULL;

    return (ht);
}

/**
 * hash_table_set - Adds an element to a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    hash_node_t *new, *tmp;
    char *value_copy;
    unsigned long int index;

    if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
        return (0);

    value_copy = strdup(value);
    if (value_copy == NULL)
        return (0);

    index = key_index((const unsigned char *)key, ht->size);
    tmp = ht->head;
    while (tmp)
    {
        if (strcmp(tmp->key, key) == 0)
        {
            free(tmp->value);
            tmp->value = value_copy;
            return (1);
        }
        tmp = tmp->next;
    }

    new = malloc(sizeof(hash_node_t));
    if (new == NULL)
    {
        free(value_copy);
        return (0);
    }
    new->key = strdup(key);
    if (new->key == NULL)
    {
        free(value_copy);
        free(new);
        return (0);
    }
    new->value = value_copy;
    new->next = ht->array[index];
    ht->array[index] = new;

    if (ht->head == NULL)
    {
        new->sprev = NULL;
        new->next = NULL;
        ht->head = new;
        ht->tail = new;
    }
    else if (strcmp(ht->head->key, key) > 0)
    {
        new->sprev = NULL;
        new->next = ht->head;
        ht->head->sprev = new;
        ht->head = new;
    }
    else
    {
        tmp = ht->head;
        while (tmp->next != NULL && strcmp(tmp->next->key, key) < 0)
            tmp = tmp->next;
        new->sprev = tmp;
        new->next = tmp->next;
        if (tmp->next == NULL)
            ht->tail = new;
        else
            tmp->next->sprev = new;
        tmp->next = new;
    }

    return (1);
}

/**
 * hash_table_get - Retrieve the value associated with
 *                   a key in a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 * @key: The key to get the value of.
 *
 * Return: If the key cannot be matched - NULL.
 *         Otherwise - the value associated with key in ht.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    hash_node_t *node;
    unsigned long int index;

    if (ht == NULL || key == NULL || *key == '\0')
        return (NULL);

    index = key_index((const unsigned char *)key, ht->size);
    if (index >= ht->size)
        return (NULL);

    node = ht->head;
    while (node != NULL && strcmp(node->key, key) != 0)
        node = node->next;

    return ((node == NULL) ? NULL : node->value);
}

/**
 * hash_table_print - Prints a sorted hash table in order.
 * @ht: A pointer to the sorted hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
    hash_node_t *node;

    if (ht == NULL)
        return;

    node = ht->head;
    printf("{");
    while (node != NULL)
    {
        printf("'%s': '%s'", node->key, node->value);
        node = node->next;
        if (node != NULL)
            printf(", ");
    }
    printf("}\n");
}

/**
 * hash_table_print_rev - Prints a sorted hash table in reverse order.
 * @ht: A pointer to the sorted hash table to print.
 */
void hash_table_print_rev(const hash_table_t *ht)
{
    hash_node_t *node;

    if (ht == NULL)
        return;

    node = ht->tail;
    printf("{");
    while (node != NULL)
    {
        printf("'%s': '%s'", node->key, node->value);
        node = node->sprev;
        if (node != NULL)
            printf(", ");
    }
    printf("}\n");
}

/**
 * hash_table_delete - Deletes a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
    hash_table_t *head = ht;
    hash_node_t *node, *tmp;

    if (ht == NULL)
        return;

    node = ht->head;
    while (node)
    {
        tmp = node->next;
        free(node->key);
        free(node->value);
        free(node);
        node = tmp;
    }

    free(head->array);
    free(head);
}
