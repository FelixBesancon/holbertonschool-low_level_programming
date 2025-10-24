#include <stdio.h>

/**
 * main - Entry point of the program
 * printf - Prints formated output to stdout
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long fibonacci_result = 0;
	unsigned long fibonacci_0 = 0;
	unsigned long fibonacci_1 = 1;
	int n = 0;

	for (n = 1; n <= 98; n++)
	{
		fibonacci_result = (fibonacci_0 + fibonacci_1);
		fibonacci_0 = fibonacci_1;
		fibonacci_1 = fibonacci_result;
		if (n > 1)
			printf(", ");
		printf("%lu", fibonacci_result);
	}
	putchar('\n');
	return (0);
}
