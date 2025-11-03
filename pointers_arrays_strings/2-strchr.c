#include <stddef.h>
/**
 * _strchr - Locates a character in a string.
 * @s: The string to check.
 * @c: The character to locate.
 *
 * Return: A pointer to the first occurrence of c.
 * If the character is not found, return NULL.
 */
char *_strchr(char *s, char c)
{
	char *f;
	int i;

	while (s[i] != '\0' && s[i] != c)
		i++;
	if (s[i] == c)
		return (f = &s[i]);
	else
		return (NULL);
}

