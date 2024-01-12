#include "search_algos.h"

/**
 * linear_search - A way to search through an array
 * @array:The array
 * @size:The size fo the array
 * @value:The value of the array
 * Return:Returns an integer
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
