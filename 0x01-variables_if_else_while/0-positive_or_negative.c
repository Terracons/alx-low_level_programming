#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - This program check an interger n , and
 * return if its positive or negative
 *
 * Return: This program return(0) or(1)
 */

int main(void)

{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
