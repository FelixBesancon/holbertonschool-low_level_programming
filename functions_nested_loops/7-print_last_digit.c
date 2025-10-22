#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @r: The integer to check
 *
 * Return: The last digit of the absolute value of r
 */
int print_last_digit(int r)
{
	if (r < 0)
	{
		_putchar (-(r % 10) + '0');
		return (-(r % 10));
	}
	else
	{
		_putchar ((r % 10) + '0');
		return (r % 10);
	}
}
