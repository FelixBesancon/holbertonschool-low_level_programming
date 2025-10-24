#include <stdio.h>

/**
 * main - Entry point of the program
 * printf - Prints formated output to stdout
 *
 * Return: Always o (Success)
 */
int main(void)
{
	long fibonacci_result = 0;
	long fibonacci_0 = 0;
	long fibonacci_1 = 1;
	int n = 0;

	for (n = 1; n <= 50; n++)
	{
		fibonacci_result = (fibonacci_0 + fibonacci_1);
		fibonacci_0 = fibonacci_1;
		fibonacci_1 = fibonacci_result;
		if (fibonacci_result != 1)
			printf(", ");
		printf("%ld", fibonacci_result);
	}
	putchar('\n');
	return (0);
}
