#include "function_pointers.h"
/**
 * array_iterator - executes a function given as parameter
 * on each element of an array.
 * @array: The array of elements.
 * @size: The size of the array.
 * @action: A pointer to the function to execute.
 *
 * Return: Void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; size > 0; i++, size--)
		action(array[i]);
}
