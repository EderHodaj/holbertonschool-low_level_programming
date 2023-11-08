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

	ptr = malloc(size*nmemb);

	if (ptr == NULL)
		return (NULL);
	if (nmemb == 0 || size == 0)
		ptr = NULL;
	return (ptr);

}
