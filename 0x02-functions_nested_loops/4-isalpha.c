/**
 * _isalpha - this program return upper
 * case of an alphabet
 *
 *
 * @c: character to test
 * Return: 1 or 0
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))

		return (1);
	else
		return (0);

}
