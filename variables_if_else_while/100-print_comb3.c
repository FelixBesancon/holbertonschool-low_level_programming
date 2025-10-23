#include <stdio.h>
/**
 * main - Entry point of the program
 * putchar - Writes a character to stdout
 *
 * Return - Always 0 (Success)
 */
int main(void)
{
	int DIZAINE = 0;
	int UNITE = 0;

	for (DIZAINE = 0; DIZAINE <= 9; DIZAINE++)
	{
		for (UNITE = 0; UNITE <= 9; UNITE++)
		{
			if (DIZAINE != UNITE && DIZAINE < UNITE)
				{
					putchar(DIZAINE + '0');
					putchar(UNITE + '0');
					putchar(' ');
				}
		}
	
	}
return (0);
}
