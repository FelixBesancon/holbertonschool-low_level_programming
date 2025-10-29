#include "main.h"
/**
 * puts_half - Prints the second half of a string
 * @str: The string to check.
 * Return: Void
 */
void puts_half(char *str)
{
	int length = 0;
	int half_length = 0;
	int i;

	while (str[length] != '\0')
		length++;
	if (length % 2 == 0)
		half_length = length / 2;
	else
		half_length = (length + 1) / 2;
	for (i = half_length; i < length; i++)
		_putchar(str[i]);
	_putchar('\n');
}
