#include "main.h"
/**
 * _strcmp - sdfsd
 * @s1:sdfsd
 * @s2:dsvsd
 */

int _strcmp(char *s1, char *s2)
{
	int diff = 0;
	int i = 0;

	while (s1[i] != '\0' || s2[i] != '\0')
		if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			break;
		}
	return (diff);
}
