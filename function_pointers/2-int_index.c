#include "function_pointers.h"
/**
 * int_index - sdfsdf
 * @array:sfsdfs
 * @size:sfsd
 * @cmp:sdfsdf
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < (size-1); i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
