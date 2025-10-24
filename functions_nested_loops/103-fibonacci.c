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
	unsigned long sum = 0;
	
	while (fibonacci_result <= 4000000)
	{
		fibonacci_result = (fibonacci_0 + fibonacci_1);
		fibonacci_0 = fibonacci_1;
		fibonacci_1 = fibonacci_result;
		if (fibonacci_result % 2 == 0)
			sum = sum + fibonacci_result;
	}
	printf("%lu\n", sum);
	return (0);
}

