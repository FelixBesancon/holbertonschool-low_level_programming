/**
 * cap_string - Capitalize all words of a string.
 * @str: The char string to work on.
 *
 * Return: The capitalized string.
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'z') &&
			(i == 0 || str[i - 1] == 9 || str[i - 1] == 10 || str[i - 1] == 32 ||
			str[i - 1] == 33 || str[i - 1] == 34 || str[i - 1] == 40 ||
			str[i - 1] == 41 || str[i - 1] == 44 || str[i - 1] == 46 ||
			str[i - 1] == 59 || str[i - 1] == 63 ||	str[i - 1] == 123 ||
			str[i - 1] == 125))
			str[i] = str[i] - 32;
	}
	return (str);
}
