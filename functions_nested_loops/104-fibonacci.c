#include <stdio.h>

/**
 * main - Entry point of the program
 * printf - Prints formated output to stdout
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long lo_fibonacci_result = 0;
	unsigned long hi_fibonacci_result = 0;
	unsigned long lo_fibonacci_0 = 0;
	unsigned long hi_fibonacci_0 = 0;
	unsigned long lo_fibonacci_1 = 1;
	unsigned long hi_fibonacci_1 = 0;
	unsigned long carry = 0;
	int n = 0;

	for (n = 1; n <= 98; n++)
	{
		carry = 0;
		lo_fibonacci_result = (lo_fibonacci_0 + lo_fibonacci_1) % 1000000000;
		carry = (lo_fibonacci_0 + lo_fibonacci_1) / 1000000000;
		hi_fibonacci_result = (hi_fibonacci_0 + hi_fibonacci_1 + carry);
		lo_fibonacci_0 = lo_fibonacci_1;
		hi_fibonacci_0 = hi_fibonacci_1;
		lo_fibonacci_1 = lo_fibonacci_result;
		hi_fibonacci_1 = hi_fibonacci_result;
		if (n > 1)
			printf(", ");
		if (hi_fibonacci_result == 0)
			printf("%lu", lo_fibonacci_result);
		else
			printf("%lu09%lu", hi_fibonacci_result, lo_fibonacci_result);
	}
	putchar('\n');
	return (0);
}
