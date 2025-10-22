#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase using _putchar
 *
 * Return: Void
 */
void print_alphabet(void)
{
	int i = 0;

	for (i = 97; i < 123; i++)
		_putchar(i);
	_putchar(10);
}
