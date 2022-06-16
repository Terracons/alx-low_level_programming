#include "main.h"

/**
 * _strncat - this program
 * concatenate two strings
 *
 * @dest: first strings
 * @src: second strings
 * @n: byte chracter
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;

	while (dest[i] != 0)
	{
		i++;
	}
	j = 0;

	while (src[j] != 0 && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
