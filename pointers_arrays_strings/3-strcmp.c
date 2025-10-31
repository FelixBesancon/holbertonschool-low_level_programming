/**
 * _strcmp - Compares two strings.
 * @s1: the first string to compare.
 * @s2: the second string to compare.
 *
 * Return: The byte size comparison between the last character compared
 * of the two strings
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return ((s1[i] + '0') - (s2[i] + '0'));
}
