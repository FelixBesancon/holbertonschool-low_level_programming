#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 * followed by a new line
 *
 * Return: Void
 */
void more_numbers(void)
{
	int i = 0;
	int tens;
	char unity;

	for (i = 0; i < 10; i++)
	{
		tens = 0;
		unity = '0';
		while (tens != 1 || unity != '5')
		{
			if (tens == 1)
				_putchar('1');
			_putchar(unity);
			unity++;
			if (tens == 0 && unity > '9')
			{
				tens = 1;
				unity = '0';
			}
		}
		_putchar('\n');
	}
}