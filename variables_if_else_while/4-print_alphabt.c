#include <stdio.h>
/**
 * main - Entry point of the program
 * putchar - Writes a character to stdout
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 97;

	do {
		if (i == 101 || i == 113)
			i++;
		else
			putchar(i);
			i++;
	} while (i < 123);
	putchar(10);
	return (0);
}
