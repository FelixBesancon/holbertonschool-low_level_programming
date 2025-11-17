#include "function_pointers.h"
/**
 * int_index - Searches for an integer
 * @array: The integers to check.
 * @size: The number of elements in the array.
 * @cmp: A pointer to the function to bu used to compare values.
 *
 * Return: The index of the first element for whiwh the cmp
 * function does not return 0.
 * Return -1 if no element matches or if size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; size > 0; i++, size--)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
