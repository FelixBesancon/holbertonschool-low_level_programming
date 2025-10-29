/**
 * _strcpy - Copies the string pointed to by src, including the
 * terminating null byte ('\0'), to the buffer pointed to by dest.
 * @dest: The buffer of destination.
 * @src: the string to copy.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int length = 0;
	int i;

	while (src[length] != '\0')
		length++;
	length++;
	for (i = 0; i < length; i++)
		dest[i] = src[i];
	return (dest);
}
