#include "main.h"


/**
 * print_last_digit - this program print last
 * digit of a number
 *
 *
 * @n: character to test
 *
 * Return: this program return n
 */

int print_last_digit(int n)
{
	if (n < 0)
		n = n * -1;
	_putchar((n % 10) + '0');
	return (n % 10);
}
