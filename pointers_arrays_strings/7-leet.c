/**
 * leet - Encodes a string to l337.
 * @str: The string to encode.
 *
 * Return: The encoded string.
 */
char *leet(char *str)
{
	char from[] = "aAeEoOtTlL";
	char to[] = "4433007711";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		j = 0;
		while (j < 10)
		{
			if (str[i] == from[j])
				str[i] = to[j];
			j++;
		}
	}
	return (str);
}
