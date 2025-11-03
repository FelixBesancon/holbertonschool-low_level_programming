#include <stdio.h>
/**
 * print_diagsums - Prints the sum of the two diagonals of
 * a square matrix of integers.
 * @a: The square matrix of integer to sum the diagonals.
 * @size: The size of the square matrix.
 *
 * Return : Void.
 */
void print_diagsums(int *a, int size)
{
	int i = 0, j = size - 1;
	int sum_1 = 0, sum_2 = 0;

	while (i < size)
	{
		sum_1 += a[i * size + i];
		sum_2 += a[i * size + j];
		i++;
		j--;
	}
	printf("%d, %d\n", sum_1, sum_2);
}
