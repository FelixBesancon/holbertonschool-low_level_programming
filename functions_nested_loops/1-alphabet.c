#include "main.h"
/**
 * main - Entry point of the program
 * print_alphabet - Prints the alphabet in lowercase using _putchar
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int i = 0;

	for (i = 97; i < 123; i++)
		_putchar(i);
	_putchar(10);
}
