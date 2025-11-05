#include <stdio.h>
/**
 * main - Prints the number of arguments passed to the program,
 * followed by a new line.
 * @argc: The arguments count.
 * @argv: The argument vector.
 *
 * Return: Always 0 (success).
 */
int main(int argc, char **argv)
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
