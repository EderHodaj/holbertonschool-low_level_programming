#include "main.h"

/**
 * _abs - Entry point
 * @n: is parameter
 * return abs(n);
 * Return:0
 */

int _abs(int a)
{
	if (a < 0)
		return (-a);
	else
		return (+a);
}
