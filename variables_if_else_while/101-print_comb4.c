#include <stdio.h>
/**
 * main - Entry point of the program
 * putchar - Writes a character to stdout
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int tens = 0;
	int ones = 0;
	int hundreds = 0;

	for (hundreds = 0; hundreds <= 9; hundreds++)
	{
		for (tens = (hundreds + 1); tens <= 9; tens++)
		{
			for (ones = (tens + 1); ones <= 9; ones++)
			{
				if (hundreds != 0 || tens != 1 || ones != 2)
				{
					putchar(',');
					putchar(' ');
				}
				putchar(hundreds + '0');
				putchar(tens + '0');
				putchar(ones + '0');
			}
		}
	}
putchar('\n');
return (0);
}
