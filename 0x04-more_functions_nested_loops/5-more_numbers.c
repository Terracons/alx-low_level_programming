#include "main.h"

/**
 * more_numbers - this program
 * print from 0 to 9
 *
 * Return: return void
 */

void more_numbers(void)
{
	int i;
	int n;

	for (i = 0; i < 10; i++)
	{
		for (i = 0; i < 10; i++)

			_putchar(i + '0');
		_putchar('\n');
	}
}
