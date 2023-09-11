#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees the memory allocated for a dog structure
 * @d: Pointer to the dog structure to be freed
 *
 * Return: None (void)
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		/* Free the dynamically allocated name and owner strings */
		free(d->name);
		free(d->owner);

		/* Free the dog structure itself */
		free(d);
	}
}
