#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - sdfsd
 * @array:sdfsdf
 * @size:sdfsdf
 * @action:sdfsdf
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
