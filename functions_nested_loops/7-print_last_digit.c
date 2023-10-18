#include "main.h"
/**
 * print_last_digit - Entry point
 * @a: is parameter
 * return abs(a);
 * Return:0
 */

int print_last_digit(int a)
{
	a = a % 10;
	if (a < 0)
	{
		a = -a;
		_putchar(a + '0');
		return (a);
	}
	else
	{
		_putchar(a + '0');
		return (a);
	}
}
