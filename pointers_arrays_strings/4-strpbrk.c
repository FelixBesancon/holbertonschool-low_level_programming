#include <stddef.h>
/**
 * _strpbrk - Locates the first occurrence of a string into another.
 * @s: The string to check.
 * @accept: The string to locate into s.
 *
 * Return: A pointer to the byte in s that matches one of the bytes
 * from accept. If no character is found, return NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		j = 0;
		do {
			if (s[i] == accept[j])
				return (&s[i]);
			j++;
		} while (accept[j] != '\0');
	}
	return (NULL);
}
