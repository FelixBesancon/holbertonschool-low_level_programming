/**
 * _prime_search - Recursively search if n is a prime number.
 * @n: The integer to divide.
 * @test: The divisor from n - 1 to 1.
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int _prime_search(int n, int test)
{
	if (n % test == 0 && test > 1)
		return (0);
	else if (test == 1)
		return (1);
	return (_prime_search(n, test - 1));
}

/**
 * is_prime_number - Check if an integer is a prime number.
 * @n: The integer to check.
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime_search(n, n - 1));
}
