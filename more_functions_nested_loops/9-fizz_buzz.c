#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100
 * separated by a space and followed by a new line,
 * for multiples of three, prints "Fizz" instead,
 * for multiples of five, prints "Buzz" instead,
 * and for multiples of both three and five, prints
 * "FizzBuzz" instead.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;

	for (n = 1; n <= 100; n++)
	{
		if (n > 1)
			printf(" ");
		if ((n % 3) != 0 && (n % 5) != 0)
			printf("%d", n);
		if (n % 3 == 0)
			printf("Fizz");
		if (n % 5 == 0)
			printf("Buzz");
	}
	printf("\n");
	return (0);
}
