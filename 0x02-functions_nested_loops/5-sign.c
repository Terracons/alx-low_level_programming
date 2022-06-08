#include "main.h"

int _putchar(char c);


/**
 * print_sign - this program print sign
 *
 *
 * @n: character to test
 * Return: 1 or 0 or -1 0r /
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('-');
		return ('/');
	}

}
