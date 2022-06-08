#include "main.h"


/**
 * jack_bauer - this program print last
 * time of the day within 24hr
 *
 *
 * Return: this program return n
 */

void jack_bauer(void)
{
	int n, i;

	for (n = 0; n < 24; n++)
	{
		for (i = 0; i < 60; i++)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar(':');
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar('\n');
		}
	}
}
