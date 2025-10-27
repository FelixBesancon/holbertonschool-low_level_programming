#include "main.h"
/**
 * print_line - draws a straight line in the terminal.
 * @n: the number of times the character "_" is printed.
 *
 * Return: Void
 */
void print_line(int n)
{
	if (n > 0)
	{
		for (; n > 0; n--)
			_putchar('_');
	}
	_putchar('\n');
}
