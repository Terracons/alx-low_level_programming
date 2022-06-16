#include "main.h"

/**
 * _strcmp - this program
 * compare two strings
 *
 * @s1: first strings
 * @s2: second strings
 *
 * Return: 0 if equal else j
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (s1[i] != '\0' && j == 0)
	{
		j = s1[i] - s2[i];
		i++;
	}
	return (j);
}
