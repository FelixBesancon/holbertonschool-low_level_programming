#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int x = 0;
	int y = 0;
	int z = 0;

	while (y <= 9)
	{
		x = 0;
		z = x * y;
		_putchar(z + '0');
		for (x = 1; x <= 9; x++)
		{
		z = x * y;
			if (z <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(z + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(z / 10  + '0');
				_putchar(z % 10 + '0');
			}
		}
	_putchar (10);
	y++;
	}
}
