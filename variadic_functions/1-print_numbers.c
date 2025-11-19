#include "variadic_functions.h"
/**
 * print_numbers - Prints numbers, followed by
 * a new line.
 * @separator: The character to separate the numbers with.
 * @n: The number of numbers to print.
 *
 * Return: Void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int count = n;
	int number;
	va_list numbers;

	if (count != 0)
	{
		va_start(numbers, n);
		while (count > 0)
		{
			number = va_arg(numbers, int);
			printf("%d", number),
			count--;
			if (count > 0 && separator != NULL)
				printf("%s", separator);
		}
		va_end(numbers);
	}
	printf("\n");
}
