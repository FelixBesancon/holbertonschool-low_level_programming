#include "main.h"

/**
 * print_numbers - prints the numbers from 0 to 9
 * followed by a new line
 *
 * Return: Void
 */
void print_numbers(void)
{
	int n = 0;

	for (n = 48; n <= 57; n++)
		_putchar(n);
	_putchar('\n');
}
