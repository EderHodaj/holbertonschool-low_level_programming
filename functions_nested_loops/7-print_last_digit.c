#include "main.h"
/**
 * print_last_digit - Entry point
 * @a: is parameter
 * return abs(a);
 * Return:0
 */

int print_last_digit(int a)
{
	if (a > 0)
	{
		_putchar(a % 10 + '0');
		return (a % 10);
	}
	else
	{
		a = -a;
		_putchar(a % 10 + '0');
		return (a % 10);
	}
}
