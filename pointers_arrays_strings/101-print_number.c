#include "main.h"
/**
 * print_number - Prints an integer.
 * @n: The integer to print.
 *
 * Return: Void
 */
void print_number(int n)
{
	int i = 1, j = (n / 10);

	while (j != 0)
	{
		j = j / 10;
		i = i * 10;
	}
	if (n < 0)
		_putchar('-');
	for (j = 0; i > 0; i = (i / 10))
	{
		if (n >= 0)
		{
			j = n / i;
			n = n - (j * i);
		}
		else
		{
			j = -n / i;
			n = n + (j * i);
		}
		_putchar(j + '0');
	}
}
