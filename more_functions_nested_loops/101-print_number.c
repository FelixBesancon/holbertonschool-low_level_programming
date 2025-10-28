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
	unsigned int rest = 0;
	unsigned int tens_count = 1;

	if (n < 0)
	{
		_putchar('-');
		i = (unsigned int)(-(n + 1)) + 1;
	}
	else
		i = (unsigned int)n;
	while (i / (tens_count) >= 10)
		tens_count = tens_count * 10;
	rest = i;
	while (tens_count > 0)
	{
		_putchar(rest / tens_count + '0');
		rest = rest % tens_count;
		tens_count = tens_count / 10;
	}
}
