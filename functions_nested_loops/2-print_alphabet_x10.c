#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times in lowercase
 * using _putchar
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
