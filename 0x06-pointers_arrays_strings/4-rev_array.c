#include "main.h"

/**
 * reverse_array - this program
 * reverse array
 *
 * @a: array
 * @n: number of element
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	i = 0;
	n = n - 1;

	while (i < n)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
		i++;
		n--;
	}
}
