#include "main.h"

/**
 * print_triangle - this program
 * print triangle
 *
 * @size: expected size of tri
 * Return: void
 */
void print_triangle(int size)
{
	int i = 1;
	int n;

	while (i <= size && size > 0)
	{
		n = 0;
		while (n < size - i)
		{
			_putchar(' ');
			n++;
		}

		n = 0;
		while (n < i)
		{
			_putchar('#');
			n++;
		}
		_putchar('\n');
		i++;
	}
	if (i == 1)
		_putchar('\n');
}
