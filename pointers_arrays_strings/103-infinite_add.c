#include <stdio.h>
#include "main.h"
/**
 * infitinte_add - Add two numbers.
 * @n1: The string containing the first number to add.
 * @n2: The string containing the second number to add.
 * @r: The buffer containing the result.
 * @size_r: The buffer size.
 *
 * Return: A pointer to r, if the result can not be stored in r,
 * 0 is returned.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, count_1 = 0, count_2 = 0, num_1, num_2, rest = 0;

	while (n1[count_1] != '\0')
		count_1++;
	while (n2[count_2] != '\0')
		count_2++;
	r[size_r - 1] = '\0';
	for (i = (size_r - 2); i >= 0 && (count_1 > 0 || count_2 > 0 || rest != 0); count_1--, count_2--, i--)
	{
		num_1 = 0, num_2 = 0;
		if (count_1 > 0)
			num_1 = n1[count_1 - 1] - '0';
		if (count_2 > 0)
			num_2 = n2[count_2 - 1] - '0';
		if (i < 0)
			return (0);
		r[i] = ((rest + num_1 + num_2) % 10) + '0';
		putchar(r[i]);
		rest = (rest + num_1 + num_2) / 10;
	}
	if (count_1 > 0 || count_2 > 0 || rest != 0)
		return 0;
	r[i--] = rest + '0';

	return (r + i + 1);

	printf("\nsize_r %d\n", i);
	printf("num_1 %d\n", count_1);
	printf("num_2 %d\n", count_2);
	printf("num_1 %d\n", num_1);
	printf("num_2 %d\n", num_2);
}
