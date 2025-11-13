#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - Creates a new dog using dog_t type and dog structure.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The name of the dog's owner.
 *
 * Return: A pointer to the new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i, j;
	dog_t *dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);
	i = 0;
	while (name[i] != '\0')
		i++;
	dog->name = malloc(sizeof(char) * i + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (j = 0; j < i; j++)
		dog->name[j] = name[j];
	dog->name[j] = '\0';
	dog->age = age;
	i = 0;
	while (owner[i] != '\0')
		i++;
	dog->owner = malloc(sizeof(char) * i + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (j = 0; j < i; j++)
		dog->owner[j] = owner[j];
	dog->owner[j] = '\0';
	return (dog);
}
