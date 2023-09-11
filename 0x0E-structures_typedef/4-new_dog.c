#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog (string)
 * @age: Age of the dog (float)
 * @owner: Owner of the dog (string)
 *
 * Return: Pointer to the newly created dog (dog_t)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr;
	char *name_copy;
	char *owner_copy;

	/* Allocate memory for the new dog structure */
	new_dog_ptr = malloc(sizeof(dog_t));
	if (new_dog_ptr == NULL)
		return (NULL);

	/* Allocate memory and copy the name and owner strings */
	name_copy = strdup(name);
	owner_copy = strdup(owner);

	/* Check for memory allocation errors */
	if (name_copy == NULL || owner_copy == NULL)
	{
		free(name_copy);
		free(owner_copy);
		free(new_dog_ptr);
		return (NULL);
	}

	/* Initialize the new dog structure with copied values */
	new_dog_ptr->name = name_copy;
	new_dog_ptr->age = age;
	new_dog_ptr->owner = owner_copy;

	return (new_dog_ptr);
}
