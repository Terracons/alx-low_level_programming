#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - this program
 * print number with seperator
 * @separator: param ","
 * @n:param n
 * Return: Void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, unsigned int));
		if (i != (n - 1) && separator)
			printf("%s ", separator);
	}
	va_end(list);
	printf("\n");
}
