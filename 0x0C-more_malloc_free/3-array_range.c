#include "main.h"
#include <stdlib.h>

/**
 * array_range - find array range
 *
 * @min: min param
 * @max: max param
 * Return: a
 */
int *array_range(int min, int max)
{
	int *a;
	int i, f;

	f = (max - min) + 1;
	if (min > max)
		return (NULL);
	a = malloc(sizeof(int) * f);
	if (a == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		a[i] = min++;
	return (a);
}
