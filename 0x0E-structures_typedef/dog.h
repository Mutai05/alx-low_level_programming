#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Represents a dog with name, age, and owner.
 * @name: Name of the dog (string).
 * @age: Age of the dog (float).
 * @owner: Owner of the dog (string).
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* Define a typedef for struct dog as dog_t */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
