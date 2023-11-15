#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
/**
 * print_numbers - sdfsdf
 * @separator:asfasd
 * @n:sdfsdf
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	if (separator == NULL)
		return;
	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);
		printf("%d", x);

		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
