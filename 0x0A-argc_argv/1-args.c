#include <stdio.h>

/**
 * main - this program to test the arg
 *
 * @argc: the argument count
 * @argv: the argument array
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
