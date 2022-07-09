#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - this program
 * list the index
 * @array: array of int
 * @size: size of array
 * @cmp: pointer to the function to compare values
 * Return: 0 or 1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	if (array && cmp && size > 0)
		for (n = 0; n < size; n++)
			if ((cmp)(array[n]))
				return (n);
	return (-1);
}
