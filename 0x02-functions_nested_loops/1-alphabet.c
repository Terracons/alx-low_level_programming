#include "main.h"


/**
 * print_alphabet - this program print_alphabet
 *
 * Return:void
 * Description: this program print out lowercase
 * of alphabet to standard output.
 */

void print_alphabet(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
