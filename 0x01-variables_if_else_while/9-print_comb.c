#include <stdio.h>

/**
 * main - this program is about printing a lower case of an alphabet
 *
 * Return: zero (0)
 */
int main(void)

{
	int i;

	for (i = 48; i <=57; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar(10);
	return (0);
}
