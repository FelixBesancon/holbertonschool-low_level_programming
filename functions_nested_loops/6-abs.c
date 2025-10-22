#include "main.h"

/**
 * _abs - Return the absolute value of an integer
 * @r: The integer to check
 *
 * Return: -r if r is negative, r otherwise
 */
int _abs(int r)
{
	if (r < 0)
		return (-r);
	else
		return (r);
}
