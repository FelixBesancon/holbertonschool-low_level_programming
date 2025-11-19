#include "variadic_functions.h"
/**
 * print_strings - Prints a string, followed by a new line.
 * @separator: The character to separate the strings with.
 * @n: The number of strings to print.
 *
 * Return: Void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int count = n;
	char *string;
	va_list strings;

	if (count == 0)
		return;
	va_start(strings, n);
	while (count > 0)
	{
		string = va_arg(strings, char*);
		printf("%s", string);
		count--;
		if (count > 0 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
