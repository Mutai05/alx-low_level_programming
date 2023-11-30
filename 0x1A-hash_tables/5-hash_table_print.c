#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Prints a hash table
 * @ht: The hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
    hash_node_t *node;
    unsigned long int i;
    int printed = 0;

    if (ht == NULL)
        return;

    printf("{");
    for (i = 0; i < ht->size; i++)
    {
        node = ht->array[i];
        while (node != NULL)
        {
            if (printed == 1)
                printf(", ");
            printf("'%s': '%s'", node->key, node->value);
            printed = 1;
            node = node->next;
        }
    }
    printf("}\n");
}
