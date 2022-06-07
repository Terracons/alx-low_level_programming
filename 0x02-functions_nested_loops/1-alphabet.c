#include "main.h"


/**
 * main - this program print alphabet
 *
 * Return: the program return (0)
 */

char ch = 'a'; 

void print_alphabet(void)
{
	for (ch ='a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');

	return;
}
