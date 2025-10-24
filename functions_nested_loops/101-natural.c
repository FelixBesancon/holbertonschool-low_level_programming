#include <stdio.h>

/**
 * main - Entry point of the program
 * printf - Prints formated output to stdout
 *
 * Return: Always o (Success)
 */
int main(void)
{
	int natural = 0;
	int sum = 0;
		for (natural = 0; natural < 1024; natural++)
		{
			if (natural % 3 == 0 || natural % 5 == 0)
			{
				sum = sum + natural;
			}
		}
	printf("%d\n", sum);
	return (0);
}
