#include <stddef.h>
/**
 * _strstr - Finds the first occurrence of a substring into a string.
 * @haystack: the string to check.
 * @needle: the substring to locate into haystack.
 *
 * Return: A pointer to the beginning of the located substring into the string.
 * If no occurrence of the substring is found, return NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;
	int size = 0;

	if (needle[0] == '\0')
		return (haystack);
	while (needle[size] != 0)
		size++;
	for (i = 0; haystack[i] != '\0'; i++)
	{
		j = 0;
		while (j < size && haystack[i + j] == needle[j])
			j++;
		if (j == size)
			return (&haystack[i]);
	}
	return (NULL);
}
