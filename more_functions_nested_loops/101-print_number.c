#include "main.h"
/**
 * print_number - prints an integer
 * @n: The integer to print
 *
 * Return : Void
 */
void print_number(int n)
{
	int rest = 0;
	int tens_count = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (n / (10 * tens_count) > 0)
		tens_count = tens_count * 10;
	rest = n;
	while (tens_count > 0)
	{
		_putchar(rest / tens_count + '0');
		rest = rest % tens_count;
		tens_count = tens_count / 10;
	}
}
