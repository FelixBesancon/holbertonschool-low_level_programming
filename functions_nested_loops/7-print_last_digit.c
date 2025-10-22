#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @r: The integer to check
 *
 * Return: The last digit of the absolute value of r
 */
int print_last_digit(int r)
{
	_putchar ((_abs(r) % 10) + '0');
	return (_abs(r) % 10);
}
