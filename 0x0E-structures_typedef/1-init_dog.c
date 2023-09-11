#include "dog.h"
#include <stddef.h>

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to the struct dog variable
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: None (void)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL) /* Check if d is a valid pointer */
		return;

	d->name = name; /* Assign name to the name field of d */
	d->age = age;   /* Assign age to the age field of d */
	d->owner = owner; /* Assign owner to the owner field of d */
}
