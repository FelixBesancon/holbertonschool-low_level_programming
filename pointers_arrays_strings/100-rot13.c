/**
 * rot13 - Encodes a string using rot13.
 * @str: The string to encode.
 *
 *
 * Return: The encodedd string.
 */
char *rot13(char *str)
{
	char from[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char to[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		j = 0;
		while (from[j] != '\0' && str[i] != from[j])
			j++;
		if (str[i] == from[j])
			str[i] = to[j];
	}
	return (str);
}
