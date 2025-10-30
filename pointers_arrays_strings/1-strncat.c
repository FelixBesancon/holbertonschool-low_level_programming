/**
 *_strncat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 * @n: the maximal number of bytes used from src.
 *
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && n > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
		n--;
	}
	return (dest);
}
