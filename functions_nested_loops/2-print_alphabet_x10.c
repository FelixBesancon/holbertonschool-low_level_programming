#include "main.h"

/**
 * print_alphabet_x10 - Prints ten times the alphabet in lowercase using _putchar
 *
 * Return: Void
 */
void print_alphabet_x10(void)
{
	int i = 0;
	int n = 0;

	for (n = 10; n > 0; n--)
	{
		for (i = 97; i < 123; i++)
			_putchar(i);
		_putchar(10);
	}
}
