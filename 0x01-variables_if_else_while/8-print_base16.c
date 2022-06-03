#include <stdio.h>

/**
 * main - this program is about printing a lower case of an alphabet
 *
 * Return: zero (0)
 */
int main(void)

{
	int i = '1';
	int ch = 'a';

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar(10);
	return (0);
}
