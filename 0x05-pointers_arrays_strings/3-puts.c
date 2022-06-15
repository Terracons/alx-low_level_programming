#include "main.h"

/**
 * _puts - return
 * the lenth of a strings
 *
 * @str: charter s
 * Return: return void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
