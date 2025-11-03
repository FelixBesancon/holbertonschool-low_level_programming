/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The initial segment to check.
 * @accept: The accepted bytes.
 *
 * Return: The numbers of bytes in s from accept (n).
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		j = 0;
		do
		{
			if (accept[j] == '\0')
				return (n);
			else if (s[i] == accept[j])
				n++;
			else
				j++;
		} while (s[i] != accept[j]);
	}
	return (n);
}

