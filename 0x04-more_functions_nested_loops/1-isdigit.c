/**
 * _isdigit - check if character
 * * is digit or not
 * * @c: char input
 * Return: return either 0 or 1
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
