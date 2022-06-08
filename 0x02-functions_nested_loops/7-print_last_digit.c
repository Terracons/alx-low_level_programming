#include "main.h"


/**
 * print_last_digit - this program print last
 * digit of a number
 *
 *
 * @n: character to test
 * @j: second character to text
 * Return: this program return n
 */

int print_last_digit(int n)
{
	int j;

	if (n < 0)
		n = -n;
	j = n % 10;
	_putchar(j + '0');
	return (j);
}
