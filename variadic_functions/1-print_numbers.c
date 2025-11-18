#include "variadic_functions.h"
/**
 * print_numbers - Prints numbers, followed by
 * a new line.
 * @separator: the character to separate the numbers with.
 * @n: the number of numbers to print.
 *
 * Return: Void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int count = n;
	int number, i, j;
	va_list numbers;

	if (count == 0 || separator == NULL)
		return;
	va_start(numbers, n);
	while (count > 0)
	{
		number = va_arg(numbers, int);
		i = 1;
		j = (number / 10);
		while (j != 0)
		{
			j = j / 10;
			i = i * 10;
		}
		if (number < 0)
			putchar('-');
		for (j = 0; i > 0; i = (i / 10))
		{
			if (number >= 0)
			{
				j = number / i;
				number = number - (j * i);
			}
			else
			{
				j = -(n / i);
				number = number + (j * i);
			}
			putchar(j + '0');
			count--;
		}
		va_end(numbers);
	}
}
