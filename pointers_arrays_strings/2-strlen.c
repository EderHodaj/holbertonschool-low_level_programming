#include "main.h"
/**
 * _strlen - char
 * @s:Sec
 * return (0):value
 */

int _strlen(char *s)
{
	int i = 0;

		while (s[i] != '\0')
		{
			i++;
		}

	return (i);
}
