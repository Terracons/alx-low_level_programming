#include "main.h"

/**
 * print_most_numbers - this program
 * print from 0 to 9
 *
 * Return: return void
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar(i + '0');
	}
	_putchar('\n');
}
