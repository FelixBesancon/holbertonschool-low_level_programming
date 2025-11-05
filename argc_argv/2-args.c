#include <stdio.h>
/**
 * main - Prints the name of every arguments passed to the program,
 * followed by a new line.
 * @argc: The arguments count.
 * @argv: The argument vector.
 *
 * Return: Always 0 (success).
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
