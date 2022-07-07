#include "function_pointers.h"

/**
 * array_iterator - This function
 * execute a paramater
 * based on action of the array.
 *
 * @array: param array
 * @size : param size
 * @action: pointer function
 * Return:This program return void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t j;

	if (array && action)
	{
		for (j = 0; j < size; j++)
		{
			action(array[j]);
		}
	}
}
