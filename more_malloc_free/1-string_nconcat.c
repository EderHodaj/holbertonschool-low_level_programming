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
	int length1 = 0;
	int length2 = 0;
	char *index;
	int i;

	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		return (NULL);

	while (s1[length] != '\0')
		length1++;
	index = malloc(sizeof(char)*length1);

	while (s2[length2] != '\0')
		length2++;
	index = malloc(sizeof(char)*length2);

	if (index == NULL)
		return (NULL);
	
	for (i = o; s1[i] != '\0'; i++)
	{
		index[i] = s1[i];
	}
	for (i = o; s2[i] != '\0'; i++)
        {
                index[length1 + i] = s2[i];
        }
	return (index)
}
