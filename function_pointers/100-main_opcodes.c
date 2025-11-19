#include <stdio.h>
#include <stdlib.h>
/*
 *
 */
int main(int argc, char **argv)
{
	unsigned char *p_main = main;
	int i, byte_count;
	
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	byte_count = atoi(argv[1]);
	if (byte_count < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < byte_count; i++)
	{
		if (i > 0)
			printf(" ");
		printf("%02x", p_main[i]);
	}
	printf("\n");
}
