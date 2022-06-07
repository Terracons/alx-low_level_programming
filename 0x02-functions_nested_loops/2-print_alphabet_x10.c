#include "main.h"


/**
 * print_alphabet_x10 - this program
 *  print_alphabet 10 times
 *
 * Return:void
 * Description: this program print out lowercase
 * of alphabet to standard output.
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char ch = 'a';

	for (i = 0; i < 10; i++)
	{

		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
