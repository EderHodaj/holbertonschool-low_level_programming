#include "main.h"
/**
 * puts_half - 7exx
 * @str: pointers
 */
 
void puts_half(char *str)
{
	int i = 0, len, mid, j;

	while (str[i] != '\0')
	{
		i++;
	}
	len = i - 1;
	mid = len / 2;
	for (j = mid + 1; j < len; j++)
	{
		_putchar (str[j]);
	}
	_putchar ('\n');

}
