#include "main.h"

/**
 * _abs - Entry point
 * @a: is parameter
 * return abs(a);
 * Return:0
 */

int _abs(int a)
{
	if (a < 0)
		return (-a);
	else
		return (+a);
}
