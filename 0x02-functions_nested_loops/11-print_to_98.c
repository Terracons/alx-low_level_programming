#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - this program prit to 98
 *
 * @n: the number that will return to n
 *
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n < 98; n++)
			printf("%d, ", n);
		printf("%d\n", 98);
	}
	else
	{
		for (n = n; n > 98; --n)
			printf("%d, ", n);
		printf("%d\n", 98);
	}
}
