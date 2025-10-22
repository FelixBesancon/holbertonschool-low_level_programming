#include "main.h"

/**
 * _isalpha - Determine if the variable c is an
 * alphabetic character or not
 * @c: The character to check
 *
 * Return: on success 1 if c is an alphabetic character,
 * 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
