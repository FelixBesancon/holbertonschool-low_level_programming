/**
 * _isupper - check for uppercase character
 * @c: the character to check
 *
 * Return: On success 1.
 * On else, 1 is returned.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
