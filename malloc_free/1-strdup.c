#include "main.h"
#include <stdlib.h>
/**
 * _strdup - sdfsdfg
 * @str:dsfsdf
 * Return:dsfsd
 */

char *_strdup(char *str)
{
	int i, j;
	char *array;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	array = (char *)malloc((i + 1) * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		array[j] = str[j];

	array[j] = '\0';

	return (array);
}
