#include "main.h"
#include <stdlib.h>
/**
 * _calloc - sfgs
 * @nmemb:gsdgs
 * @size:sdfsdf
 * Return:sdfsdf
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size*nmemb);

	if (ptr == NULL)
                return (NULL);

	for (i = 0; i < (nmemb*size); i++)
		ptr[i] = 0;
	return (ptr);

}
