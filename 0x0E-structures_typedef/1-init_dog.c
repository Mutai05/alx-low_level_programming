#include "dog.h"
#include <stddef.h>


/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to the struct dog variable
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d == NULL) /* check if d is a valid pointer */
        return;
    d->name = name; /* assign name to the name field of d */
    d->age = age; /* assign age to the age field of d */
    d->owner = owner; /* assign owner to the owner field of d */
}
