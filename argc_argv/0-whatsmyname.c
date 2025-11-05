#include <stdio.h>
/**
 * main - Prints the name of the program, followed by a new line.
 * @argc: The arguments count.
 * @argv: The argument vector.
 *
 * Return: Always 0 (success).
 */
int main(int argc, char **argv)
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
