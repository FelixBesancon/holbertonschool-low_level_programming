/**
 * _memcpy - Copies memory from an area to another.
 * @dest: The pointer to the memory area to fill.
 * @src: The pointer to the memory to copy.
 * @n: The number of bytes to copy.
 *
 * Return: The copied memory dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			dest[i] = src[i];
	}
	return (dest);
}
