#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point of the program
 * printf - Prints formatted output to stdout
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d and is ", n, (n % 10));
	if ((n % 10) > 5)
		printf("greater than %d\n", 5);
	else if ((n % 10) == 0)
		printf("%d\n", 0);
	else if ((n % 10) < 6 && (n % 10) != 0)
		printf("less than %d and not %d\n", 6, 0);
	return (0);
}
