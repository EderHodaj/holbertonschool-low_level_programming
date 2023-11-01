#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - dsgsdg
 * @s:dsfgsdg
 * @accept:dsfsd
 * Return:asda
 */

char *_strpbrk(char *s, char *accept)
{
	int j;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (NULL);

}
