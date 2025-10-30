/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: dest.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int n;

	while (dest[i] != '\0')
		i++;
	for (n = 0; src[n] != '\0'; i++, n++)
		dest[i] = src[n];
	return (dest);
}
