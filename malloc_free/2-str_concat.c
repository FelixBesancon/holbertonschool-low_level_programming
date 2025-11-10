#include <stdlib.h>
/**
 * str_concat - Concatenates two strings.
 * @s1: The first string to concatenate.
 * @s2: The second string to concatenate.
 *
 * Return: A pointer to a string containing s1 followed by s2,
 * return NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat = NULL;
	unsigned int i = 0, j = 0, n = 0;

	if (s1 != NULL)
	{
		while (s1[i] != '\0')
			i++;
	}
	if (s2 != NULL)
	{
		while (s2[j] != '\0')
			j++;
	}
	concat = malloc((i + j + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);
	while (n < i)
	{
		concat[n] = s1[n];
		n++;
	}
	while ((n - i) < j)
	{
		concat[n] = s2[n - i];
		n++;
	}
	concat[n] = '\0';
	return (concat);
}
