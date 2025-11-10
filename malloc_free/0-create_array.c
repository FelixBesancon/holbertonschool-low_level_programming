#include <stdlib.h>
/**
 * create_array - Creates an array of chars, and initializes it
 * with a specific char.
 * @size: The size of the array.
 * @c: The char to initialize the array with.
 *
 * Return: A pointer to the array, return NULL if size == 0 or if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *buffer = NULL;

	buffer = malloc(size * sizeof(char));
	if (buffer == NULL || size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		buffer[i] = c;
	return (buffer);
}
