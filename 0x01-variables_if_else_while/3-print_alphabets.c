#include <stdio.h>

/**
 * main - this program is about printing
 * a lower case and upper case of an alphabet
 *
 * Return: zero (0)
 */
int main(void)

{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar(10);
	return (0);
}
