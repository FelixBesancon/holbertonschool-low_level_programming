#include "3-calc.h"
/**
 * op_add - Adds two integers
 * @a: The first integer to add.
 * @b: The second integer to add.
 *
 * Return: The result of the addition.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Substracts two integers
 * @a: The first integer to substract from.
 * @b: The second integer to substract to.
 *
 * Return: The result of the substraction.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Multiplies two integers
 * @a: The first integer to multiply.
 * @b: The second integer to multiply.
 *
 * Return: The result of the multiplication.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Divides two integers
 * @a: The first integer to divide from.
 * @b: The second integer to divide to.
 *
 * Return: The result of the division, exit 100 if b is null.
 */
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	printf("Erreur\n");
	exit(100);
}
/**
 * op_mod - Modulates two integers
 * @a: The first integer to modulate from.
 * @b: The second integer to modulate to.
 *
 * Return: The result of the modulo, exit 100 if b is null.
 */
int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	printf("Erreur\n");
	exit(100);
}
