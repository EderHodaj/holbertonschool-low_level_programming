#include "main.h"

/**
 *reverse_array - aedas
 *@a: dscd
 *@n: aaca
 */

void reverse_array(int *a, int n)
{
	int start, end, tmp;

	start = 0;
	end = n - 1;

	while (start < end)
	{
		tmp = a[start];
		a[start] = a[end];
		a[end] = tmp;
		start++;
		end--;
	}
}
