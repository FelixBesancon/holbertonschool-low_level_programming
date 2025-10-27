#include "main.h"

/**
 * print_most_numbers - prints the numbers from 0 to 9
 * except 2 and 4.
 *
 * Return: Void
 */
void print_most_numbers(void)
{
	int n = 0;

	for (n = 48; n <= 57; n++)
	{
		if (n != 50 && n != 52)
			_putchar(n);
	}
	_putchar('\n');
}
