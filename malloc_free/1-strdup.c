#include <stdlib.h>
/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as parameter.
 * @str: The string to duplicate to a new string.
 *
 * Return: A pointer to a new string, return NULL if str = NULL.
 */
char *_strdup(char *str)
{
	char *duplicate = NULL;
	unsigned int i = 0, j = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	duplicate = malloc((i + 1) * sizeof(char));
	if (duplicate == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		duplicate[j] = str[j];
	duplicate[j] = '\0';
	return (duplicate);
}
