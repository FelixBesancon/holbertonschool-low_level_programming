/**
 * _sqrt_search - Recursively searches for the natural square root of n.
 * @n: The target integer.
 * @test: The integer to test.
 *
 * Return: Test if it is the natural square root of n, -1 otherwise.
 */
int _sqrt_search(int n, int test)
{
	if (test < n / test)
		return (_sqrt_search(n, test + 1));
	else if (test * test == n)
		return (test);
	else
		return (-1);
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The integer to return the natural square root of.
 *
 * Return: The natural square root of n, 0 if n is equal to 0,
 * and -1 otherwise.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	return (_sqrt_search(n, 1));
}
