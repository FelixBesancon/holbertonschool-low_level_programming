#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Frees dogd of type struct dog.
 * @d: A pointer to the dog to free.
 *
 * Return: Void.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
