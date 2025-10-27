#include "main.h"
/**
 * print_diagonal - prints a diagonal line on the terminal.
 * @n: the number of times the character "\" should be printed.
 *
 * Return: Void
 */
void print_diagonal(int n)
{
	int line_count;
	int space_count;

	if (n > 0)
	{
		space_count = 0;
		for (line_count = n; line_count > 0; line_count--)
		{
			for (space_count = n - line_count; space_count > 0; space_count--)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
