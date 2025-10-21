#include <stdio.h>
/**
 * main - Entry point of the program
 * putchar - Writes a character to stdout
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	for (i = 97; i < 123; i++)
		putchar(i);
	putchar(10);
	return (0);
}
