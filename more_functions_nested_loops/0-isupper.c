#include "main.h"
/**
 * _isupper - Entry point
 * header file
 * @c: is parameter
 * Return:0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
