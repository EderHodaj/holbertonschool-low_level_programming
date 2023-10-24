#include "main.h"
/**
 * _strcpy - exx9
 * @dest:sdfs
 * @src:sdf
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
