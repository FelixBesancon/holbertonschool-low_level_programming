#include <stdlib.h>
/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The memory size to allocate.
 *
 * Return: A pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *i = malloc(b);

	if (i == NULL)
		exit(98);
	return (i);
}
