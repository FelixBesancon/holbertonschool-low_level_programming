#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: The size of the triangle.
 *
 * Return: Void
 */
void print_triangle(int size)
{
	int line_count;
	int space_count;
	int hash_count;

	if (size > 0)
	{
		line_count = size;
		while (line_count > 0)
		{
			line_count--;
			for (space_count = line_count; space_count > 0; space_count--)
				_putchar(' ');
			for (hash_count = size - line_count; hash_count > 0; hash_count--)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
