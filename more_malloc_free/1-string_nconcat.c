#include <stdlib.h>
/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string to concatenate.
 * @s2: The second string to concatenate.
 * @n: The first bytes of s2 following s1.
 *
 * Return: A pointer to a string containing s1 followed by s2,
 * return NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *nconcat = NULL;
	unsigned int i = 0, j = 0, k = 0;

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
	if (n < j)
		j = n;
	nconcat = malloc((i + j + 1) * sizeof(char));
	if (nconcat == NULL)
		return (NULL);
	while (k < i)
	{
		nconcat[k] = s1[k];
		k++;
	}
	while ((k - i) < j)
	{
		nconcat[k] = s2[k - i];
		k++;
	}
	nconcat[k] = '\0';
	return (nconcat);
}
