#include "search_algos.h"
#include <stdlib.h>

int binary_search(int *array, size_t size, int value)
{
	size_t low, high, mid;
	low = 0;
	high = size - 1;

	if (array == NULL) 
	{
	printf("Array is NULL.\n");
	return -1;
    	}

	while (low <= high)
	{
		mid = (low + high) / 2;
		print_array(array + low, high - low + 1);
		if (value < array[mid])
		{
			high = mid - 1;
		}
		else if ( value > array[mid])
		{
			low = mid + 1;
		}
		else if (value == array[mid])
		{
			printf("Value %d found at index %ld.\n", value, mid);
			return (mid);
		}
	}
	return (-1);
}

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(int *array, size_t size)
{
	size_t i;

	i = 0;
	printf("Searching in array: ");
	while (array && i < size)
	{
		if (i > 0)
		printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}
