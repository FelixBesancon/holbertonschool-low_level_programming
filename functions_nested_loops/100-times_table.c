#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the table to print
 *
 * Return: void
 */
void print_times_table(int n)
{
	int x = 0;
	int y = 0;
	int z = 0;

	if (n >= 0 && n <= 15)
	{
		while (y <= n)
		{
			x = 0;
			z = x * y;
			_putchar(z + '0');
			for (x = x + 1; x <= n; x++)
			{
				_putchar(',');
				_putchar(' ');
				z = x * y;
				if (z <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(z + '0');
				}
				else if (z <= 99)
				{
					_putchar(' ');
					_putchar(z / 10  + '0');
					_putchar(z % 10 + '0');
				}
				else
				{
					_putchar(z / 100 + '0');
					_putchar((z % 100) / 10 + '0');
					_putchar(z % 10 + '0');
				}
			}
			_putchar(10);
			y++;
		}
	}
}
