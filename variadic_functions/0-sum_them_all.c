#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - cxvxcv
 * @n:sfsdf
 * Return:sdfsd
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int s = 0;
	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		unsigned int x = va_arg(args, unsigned int);

		s = s + x;
	}
	va_end(args);
	return (s);
}
