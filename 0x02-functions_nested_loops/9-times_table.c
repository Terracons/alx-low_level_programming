#include "main.h"


/**
 * times_table - this program print
 * multiplication table
 *
 * Return: this program return void
 */

void times_table(void)
{
	int n, i, p;

	for (n = 0; n <= 9; n++)
	{
		_putchar(48);
		for (i = 1; i <= 9; i++)
		{
			_putchar(',');
			_putchar(' ');

			p = n * i

			if (p <= 9)

				_putchar(' ');
			else
				_putchar((p / 10) + 48);

			_putchar((p % 10) + 48);
		}
		_putchar('\n');
	}
}
