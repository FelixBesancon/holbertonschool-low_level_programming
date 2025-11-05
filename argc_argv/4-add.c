#include <stdio.h>
#include <stdlib.h>
/**
 * main - Sums integers and prints the result followed by a new line,
 * or prints "Error" if the program does not recieve integers.
 * @argc: The arguments count.
 * @argv: The argument vector.
 *
 * Return: 0 (success), if an argument is not an integer, 1 is returned.
 */
int main(int argc, char **argv)
{
	int i, j, sum = 0, error = 0;

	for (i = 1; i < argc && error == 0; i++)
	{
		if (argv[i][0] == '\0')
			error = 1;
		for (j = 0; argv[i][j] != '\0' && error == 0; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
				error = 1;
		}
		if (error == 0)
			sum += atoi(argv[i]);
	}
	if (error == 0)
	{
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
