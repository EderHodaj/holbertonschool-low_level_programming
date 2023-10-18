#include "main.h"

int print_last_digit(int a)
{
	if (a > 0)
		_putchar(a % 10 + '0');
	else if (a == 0)
		_putchar(a % 10 + '0');
	else
		_putchar(a % 10 + '0');

	return (a % 10);
}
