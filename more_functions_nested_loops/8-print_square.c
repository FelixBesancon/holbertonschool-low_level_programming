#include "main.h"
/**
 * print_square - prints a square, followed by a new line
 * @size: the size of the square
 *
 * Return: Void
 */
void print_square(int size)
{
	int column_count;
	int line_count;

	if (size > 0)
		for (line_count = size; line_count > 0; line_count--)
		{
			for (column_count = size; column_count > 0; column_count--)
				_putchar('#');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
