/**
 * _isupper - check if character
 * * is upper or not
 * * @c: char input
 * Return: return either 0 or 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
