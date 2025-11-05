/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to check.
 *
 * Return: The length of s.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * _palindrome_search - Recursively search if a string is a palindrome.
 * @s: The string to check.
 * @i: The length of s.
 *
 * Return: 1 if s is a palindrome, 0 otherwise.
 */
int _palindrome_search(char *s, int i)
{
	if (*s == '\0')
		return (1);
	else if (s[0] == s[i])
		return (_palindrome_search(s + 1, i - 2));
	else
		return (0);
}
/**
 * is_palindrome - Looks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if s is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int i;

	i = _strlen_recursion(s);
	if (i <= 1)
		return (1);
	else
		return (_palindrome_search(s, i - 1));
}
