#include "main.h"

/**
 * print_diagonal- this program
 * print diagonal  line
 *
 * @n: number of character
 *
 * Return: return void
 */
void print_diagonal(int n)
{
	int i;
	int b;

	if (n <= 0)

		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (b = 0; b < i; b++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
