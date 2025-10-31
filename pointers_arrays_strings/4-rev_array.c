/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array to reverse.
 * @n: The number of elements of the array.
 *
 * Return : Void
 */
void reverse_array(int *a, int n)
{
	int i, temp;
	--n;

	for (i = ((n - 1) / 2); i >= 0; i--)
	{
		temp = a[i];
		a[i] = a[n - i];
		a[n - i] = temp;
	}
}
