#include "main.h"
/**
 * print_number - prints an integer
 * @n: The integer to print
 *
 * Return : Void
 */
void print_number(int n)
{
	unsigned int i = 0;
	int rest = 0;
	int tens_count = 1;

	if (n < 0)
	{
		_putchar('-');
		i = -(n + 1) + 1;
	}
	else
		i = n;
	while (i / (10 * tens_count) > 0)
		tens_count = tens_count * 10;
	rest = i;
	while (tens_count > 0)
	{
		_putchar(rest / tens_count + '0');
		rest = rest % tens_count;
		tens_count = tens_count / 10;
	}
}
