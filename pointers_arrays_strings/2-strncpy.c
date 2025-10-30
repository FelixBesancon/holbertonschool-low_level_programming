/**
 * _strncpy - Copies a string.
 * @dest: The destination string.
 * @src: The source string.
 * @n: tha maximal number of bytes used from src.
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (src[i] != '\0')
		i++;
	if (i >= n)
	{
		i = n;
		while (i > 0)
		{
			dest[j] = src[j];
			i--;
			j++;
		}
		return (dest);
	}
	else
	{
		
	}

	}
}
