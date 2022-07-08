#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - this program
 * print number with seperator
 * @separator: param ","
 * @n:param n
 * Return: Void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *str;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		printf("%s", str);
		if (i != (n - 1) && separator)
		{
			printf("%s", separator);
		}
	}
	va_end(list);
	printf("\n");
}
