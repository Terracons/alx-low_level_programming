#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - this program
 * print all char with seperator
 * @format:param n
 * Return: Void
 */
void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int i = 0;

	char *str;

	va_start(list, format);
	while (format && format[i])
	{
		switch (format[i++])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				break;
			case 'i':
				printf("%d", va_arg(list, int));
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				break;
			case 's':
				str = va_arg(list, char *);
				printf("%s", str != NULL ? str : "(nil)");
				break;
			default:
				continue;
		}
		if (format[i])
			printf(", ");
	}
	printf("\n");
}
