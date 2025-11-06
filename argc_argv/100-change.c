#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the minimum number of coins to make change
 * for an amount of money passed in argument.
 * @argc: The arguments count.
 * @argv: The argument vector.
 *
 * Return: Always 0 (success).
 */
int main(int argc, char **argv)
{
	int change, coins;

	if (argc == 2)
	{
		change = atoi(argv[1]);
		if (change < 0)
			printf("%d\n", 0);
		else
		{
			coins = change / 25;
			change %= 25;
			coins += change / 10;
			change %= 10;
			coins += change / 5;
			change %= 5;
			coins += change / 2;
			change %= 2;
			coins += change / 1;
			printf("%d\n", coins);
		}
		return 0;
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	
}
