/**
 * skip_stars - Jumps to the last consecutive character "*" in a string.
 * @s2: The string that containes one or more "*".
 *
 * Return: s2 at the position of the last consecutive "*".
 */
char *skip_stars(char *s2)
{
	if (*(s2 + 1) == '*')
		return (skip_stars(s2 + 1));
	else
		return (s2);
}

/**
 * only_stars_end - Checks if a string ends with one or several consecutive
 * characters "*".
 * @s2: The string that containes one or more "*".
 *
 * Return: 1 if s2 ends with a "*", 0 otherwise.
 */
int only_stars_end(char *s2)
{
	if (*s2 == '\0')
		return (1);
	else if (*s2 != '*')
		return (0);
	else
		return (only_stars_end(s2 + 1));
}

/**
 * wildcmp - Compares two strings, s2 can contain the special caracter "*"
 * that can replace any string (empty or not).
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 *
 * Return: 1 if the two strings are identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 == '\0')
			return (1);
		else
			return (only_stars_end(s2));
	}

	if (*s2 != '*')
	{
		if (*s1 == *s2)
			return (wildcmp(s1 + 1, s2 + 1));
		else
			return (0);
	}
	else
	{
		s2 = skip_stars(s2);
		if (*(s2 + 1) == '\0')
			return (1);
		else
			return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}
}
