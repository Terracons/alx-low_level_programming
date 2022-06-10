#include "main.h"

/**
 * print_square- this program
 * print diagonal  line
 *
 * @size: number of character
 *
 * Return: return void
 */
void print_square(int size)
{
	int i;
	int b;

	if (size <= 0)

		_putchar('\n');
	for (i = 0; i < size; i++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
