#include <stdlib.h>
/**
 * word_count - Counts every words of an array, separated by
 * consecutive ' ' characters.
 * @str: The string containing the words to count.
 *
 * Return: The nulmber of words in the array.
 */
int word_count(char *str)
{
	unsigned int i = 0;
	int words = 0;

	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			i++;
		else
		{
			words++;
			while (str[i] != ' ' && str[i] != '\0')
				i++;
		}
	}
	return (words);
}
/**
 * strtow - Splits a string with words separated with spaces,
 * into words stored in an array of strings,
 * each word null terminated.
 * @str: The string containing the words to split.
 *
 * Return: A pointer to an array of strings containing the
 * splitted word null terminated, and NULL in the last element.
 */
char **strtow(char *str)
{
	char **split = NULL;
	unsigned int i = 0, j = 0, start, len, n;
	int words = 0;

	if (str == NULL)
		return (NULL);
	words = word_count(str);
	if (words == 0)
		return (NULL);
	split = malloc(sizeof(char *) * (words + 1));
	if (split == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			i++;
		else
		{
			start = i;
			while (str[i] != ' ' && str[i] != '\0')
				i++;
			len = i - start;
			split[j] = malloc(sizeof(char) * (len + 1));
			if (split[j] == NULL)
			{
				for (n = 0; n < j; n++)
					free(split[n]);
				free(split);
				return (NULL);
			}
			i = start;
			for (n = 0; n < len; n++, i++)
				split[j][n] = str[i];
			split[j][n] = '\0';
			j++;
		}
	}
	split[j] = NULL;
	return (split);
}
