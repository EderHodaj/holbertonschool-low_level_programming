#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - sdfsdf
 * @b:dsfsfsdf
 * Return:sdfs
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);

}
