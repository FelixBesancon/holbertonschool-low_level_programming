#include <stdlib.h>
/**
 * argstostr - Concatenates all the arguments of a program, followed by
 * a new line.
 * @ac: The number of arguments passed.
 * @av: A pointer to an array containing all the arguments.
 *
 * Return: A pointer to the new string containing the arguments.
 */
char *argstostr(int ac, char **av)
{
	int i, j;
	unsigned int n = 1;
	char *concatenate = NULL;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < ac; i++, n++)
		{
			for (j = 0; av[i][j] != '\0'; j++)
				n++;
		}
		concatenate = malloc(sizeof(char) * (n + 1));
		n = 0;
		for (i = 0; i < ac; i++)
		{
			for (j = 0; av[i][j] != '\0'; j++, n++)
				concatenate[n] = av[i][j];
			concatenate[n] = '\n';
			n++;
		}
		concatenate[n] = '\0';
		return (concatenate);
	}
}
