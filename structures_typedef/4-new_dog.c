#include "dog.h"
#include <stdlib.h>
/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as parameter.
 * @str: The string to duplicate to a new string.
 *
 * Return: A pointer to a new string, return NULL if str = NULL.
 */
char *_strdup(char *str)
{
	char *duplicate = NULL;
	unsigned int i = 0, j = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	duplicate = malloc(sizeof(char) * (i + 1));
	if (duplicate == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		duplicate[j] = str[j];
	duplicate[j] = '\0';
	return (duplicate);
}
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
	dog_t *dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);
	dog->name = _strdup(name);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->age = age;
	dog->owner = _strdup(owner);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	return (dog);
}
