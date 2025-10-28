#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 * @a: the first integer to swap.
 * @b: the second integer to swap.
 *
 * Return: Void
 */
void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
