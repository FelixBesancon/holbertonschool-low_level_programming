#include <stdio.h>

/**
* first - Prints a text before the main function is executed.
*
* Return: Void.
*/
__attribute__((constructor))
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
