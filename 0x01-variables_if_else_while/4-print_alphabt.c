#include <stdio.h>

/**
 * main - this program is about printing a lower case of an alphabet
 *
 * Return: zero (0)
 */
int main(void)

{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e')
		{
			continue;
		}
		else if (ch == 'q')
		{
			continue;
		}
		putchar(ch);
	}
	putchar(10);
	return (0);
}
