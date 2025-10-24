#include <stdio.h>
/**
 * main - Entry point of the program
 * putchar - Writes a character to stdout
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first_tens = 0;
	int first_ones = 0;
	int second_tens = 0;
	int second_ones = 0;

	for (first_tens = 0; first_tens <= 9; first_tens++)
	{
		for (first_ones = 0; first_ones <= 9; first_ones++)
		{
			for (second_tens = first_tens; second_tens <= 9; second_tens++)
			{
				for (second_ones = (second_tens == first_tens ? first_ones + 1 : 0);
						second_ones <= 9;
						second_ones++)
				{
					if (first_tens != 0 || first_ones != 0 ||
							second_tens != 0 || second_ones != 1)
					{
						putchar(',');
						putchar(' ');
					}
					putchar(first_tens + '0');
					putchar(first_ones + '0');
					putchar(' ');
					putchar(second_tens + '0');
					putchar(second_ones + '0');
				}
			}
		}
	}
putchar('\n');
return (0);
}
