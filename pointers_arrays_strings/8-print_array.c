#include <stdio.h>
/**
 * print_array - Prints n elements of an array of integers
 * @a: The array to print.
 * @n: The number of elements to be printed.
 *
 * Return: Void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i > 0)
			printf(", ");
		printf("%d", a[i]);
	}
	printf("\n");
}
