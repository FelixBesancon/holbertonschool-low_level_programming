#include "main.h"
/**
 * rev_string - Reverses a string
 * @s: The string to reverse
 *
 * Return: Void
 */
void rev_string(char *s)
{
	int end = 0;
	int start = 0;
	int temp = 0;

	while (s[end] != '\0')
		end++;
	end--;
	while (end > start)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
