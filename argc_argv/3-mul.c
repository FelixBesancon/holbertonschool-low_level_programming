#include <stdio.h>
#include <stdlib.h>
/**
 * main - Multiplies two integers and prints the result followed by a new line,
 * or prints "Error" if the program does not recieve two integers.
 * @argc: The arguments count.
 * @argv: The argument vector.
 *
 * Return: Always 0 (success).
 */
int main(int argc, char **argv)
{
	int a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
	}
	else
		printf("Error\n");
	return (0);
}
