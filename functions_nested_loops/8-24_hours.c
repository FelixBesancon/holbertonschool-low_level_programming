#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from '00:00' to '23:59'
 *
 * Return: Void
 */
void jack_bauer(void)
{
	int H = 0;
	int h = 0;
	int M = 0;
	int m = 0;

	do {
		_putchar(H + '0');
		_putchar(h + '0');
		_putchar(':');
		_putchar(M + '0');
		_putchar(m + '0');
		_putchar(10);
		m++;
		if (m > 9)
		{
			m = 0;
			M++;
			if (M > 5)
			{
				M = 0;
				h++;
					if (h > 9)
					{
						h = 0;
						H++;
					}
			}
		}
	} while (H != 2 || h != 4 || M != 0 || m != 0);
}
