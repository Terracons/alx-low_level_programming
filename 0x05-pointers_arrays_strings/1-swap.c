#include "main.h"

/**
 * swap_int - this program change the value of
 * pointr
 *
 * @a: pointer paramete
 * @b: pointer paramete
 *
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
