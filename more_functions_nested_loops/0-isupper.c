/**
 * _isupper - check for uppercase character
 * @c: the character to check
 *
 * Return: On success 0.
 * On error, 1 is returned.
 */
int _isupper(int c)
{
	if (c >= 97 && c <= 122)
		return (0);
	else
		return (1);
}
