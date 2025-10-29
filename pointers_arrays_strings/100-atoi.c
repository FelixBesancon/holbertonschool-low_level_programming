/**
 * _atoi - Convert a string to an integer.
 * @s: The string to convert.
 *
 * Return: The converted integer
 */
int _atoi(char *s)
{
	int converted = 0;
	int minus = 0;
	int i = 0;
	int number = 0;

	while (s[i] != '\0' && number == 0)
	{
		if (s[i] == '-')
		{
			minus++;
			i++;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			number = 1;
			while (s[i] >= '0' && s[i] <= '9')
			{
				if (minus % 2 != 0)
					converted = (converted * 10) - (s[i] - '0');
				else
					converted = (converted * 10) + (s[i] - '0');
				i++;
			}
		}
		else
			i++;
	}
	return (converted);
}
