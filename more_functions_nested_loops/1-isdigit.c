#include "main.h"
/**
 * _isdigit - Entry point
 * header file
 * @c: is parameter
 * Return:0
 */


int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
