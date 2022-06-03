#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - progaram return last digit
 *
 * Return: the program return (0)
 */

int main(void)

{

	int n;
	int b;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	b = n % 10;

	if (b > 5)
	{
		printf("Last digit of %d and is greater than 5\n", b);
	}
	else if (b < 6 && b != 0)
	{
		printf("Last digit of %d and is less than 6 and not 0\n", b);
	}
	else
	{
		printf("Last digit of %d and is 0\n", b);
	}
	return (0);
}
