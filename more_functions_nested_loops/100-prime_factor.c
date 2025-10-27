#include <stdio.h>
/**
 * main - find and prints the largest prime factore
 * of the number 612852475143 followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long n = 612852475143;
	unsigned long divisor = 2;

	while (n > 1)
	{
		while (n % divisor != 0)
			divisor++;
		n = n / divisor;
	}
	printf("%lu\n", divisor);
	return (0);
}
