#include "dog.h"
#include <stddef.h>
/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: A pointer to the dog to initalize.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The name of the dog's owner.
 *
 * Return: Void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
