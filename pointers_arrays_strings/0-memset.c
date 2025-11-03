/**
 * _memset - Fills memory with a constant byte.
 * @s: The pointer to the memory area to fill.
 * @b: The constant to fill the memory with.
 * @n: The number of bytes to fill.
 *
 * Return: The filled memory.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			s[i] = b;
	}
	return (s);
}
