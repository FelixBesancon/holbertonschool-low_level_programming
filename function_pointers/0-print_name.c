#include "function_pointers.h"
/**
 * print_name - Prints a name.
 * @name: The name to print.
 * @f: The way the name is printed.
 *
 * Return: Void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
