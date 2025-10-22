#include "main.h"

/**
 * _islower - Determine if the variable c is a lowercase letter or not
 * @c: The character to check
 *
 * Return: on success 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
