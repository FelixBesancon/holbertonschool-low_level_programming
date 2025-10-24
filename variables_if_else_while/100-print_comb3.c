#include <stdio.h>
/**
 * main - Entry point of the program
 * putchar - Writes a character to stdout
 *
 * Return - Always 0 (Success)
 */
int main(void)
{
	int tens = 0;
	int ones = 0;

	for (tens = 0; tens <= 9; tens++)
	{
		for (ones = (tens + 1); ones <= 9; ones++)
		{
			if (tens != 0 || ones != 1)
			{
				putchar(',');
				putchar(' ');
			}
			putchar(tens + '0');
			putchar(ones + '0');
		}
	}
putchar('\n');
return (0);
}
