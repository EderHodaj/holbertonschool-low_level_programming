#include "main.h"
/**
 * _memset - sdfsd
 * @s:sdfsd
 * @b:sdfsdf
 * @n:sdfsdf
 * Return:sdfsdf
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
