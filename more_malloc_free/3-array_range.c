#include <stdlib.h>
/**
 * array_range - Creates an array of integers containing all the values
 * from min to max.
 * @min: The first and minimal value of the array.
 * @max: The last and maximal value of the array.
 *
 * Return: A pointer to the newly created array, return NULL on failure.
 */
int *array_range(int min, int max)
{
	int *array;
	int num = min;
	unsigned int  i;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
		return (NULL);
	for (i = 0; num <= max; i++, num++)
		array[i] = num;
	return (array);
}
