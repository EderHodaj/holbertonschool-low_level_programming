#include "main.h"
#include <stdlib.h>
/**
 * str_concat - sdfsdf
 * @si:sdfgsdf
 * @s2:sdgsg
 * Return:dfsd
 */

char *str_concat(char *s1, char *s2)
{
	int l1, l2, i;
	char* concat;
	
	if (s1 == NULL)
		return (NULL);

	l1 = 0;
	while (s1[l1] != '\0')
	{
		l1++;
	}

	if (s2 == NULL)
                return (NULL);

	l2 = 0;
	while (s2[l2] != '\0')
	{
		l2++;
	}

	concat = (char*)malloc(l1 + l2 + 1);
	
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < l1; i++)
	{
		concat[i] = s1[i];
	}
	for (i = 0; i < l2; i++)
	{
		concat[l1 + i] = s2[i];
	}
	concat[l1 + l2] = '\0';

	return (concat);
}
