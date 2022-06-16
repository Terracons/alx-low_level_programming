#include "main.h"

/**
 * _strncpy - this program
 * concatenate two strings
 *
 * @dest: first strings
 * @src: second strings
 * @n: num of chracter
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;

	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}

	a = a;
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
