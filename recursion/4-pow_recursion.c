/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The integer to raise to the power of y.
 * @y: The power to raise the value of x.
 *
 * Return: The result of x power y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

