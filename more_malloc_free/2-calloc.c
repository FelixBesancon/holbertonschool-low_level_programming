#include <stdlib.h>
/**
 * _calloc - Allocates memory for an array, using malloc, and set it to zero.
 * @nmemb: The numbers of elements to allocate the memory with.
 * @size: The byte size to allocate the memory with.
 *
 * Return: A pointer to the allocated memory, return NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned char *set_zero;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	set_zero = p;
	for (i = 0; i < (nmemb * size); i++)
		set_zero[i] = 0;
	return (p);
}
