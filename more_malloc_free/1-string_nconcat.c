#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - sdfsd
 * @s1:sdf
 * @s2:sfsdf
 * @n:fsdf
 * Return:sdfs
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length1 = 0;
	unsigned int length2 = 0;
	char *index;
	unsigned int i;
	unsigned int total_len;

	if (s1 == NULL)
		return ("");
	if (s2 == NULL)
		return ("");

	while (s1[length1] != '\0')
		length1++;

	while (s2[length2] != '\0')
		length2++;

	if (n >= length2)
		n = length2;

	total_len = length1 + n;

	index = malloc(total_len + 1);

	if (index == NULL)
		return (NULL);

	for (i = 0; i < length1; i++)
	{
		index[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		index[length1 + i] = s2[i];
	}
	index[total_len] = '\0';

	return (index);
}
