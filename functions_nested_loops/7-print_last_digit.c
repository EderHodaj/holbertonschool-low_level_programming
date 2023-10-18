#include "main.h"

int print_last_digit(int a)
{
	if (a > 0)
		_putchar(a % 10 + '0');

	return (a % 10);
}
