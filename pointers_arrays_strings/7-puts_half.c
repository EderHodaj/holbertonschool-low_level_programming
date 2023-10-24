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
	len = i;
	mid = len / 2;
	if (len % 2 == 1){
		for (j = mid + 1; j < len; j++)
			_putchar (str[j]);
	}
	else {
		for (j = mid; j < len; j++)
		{
			_putchar (str[j]);
		}
	}
	_putchar ('\n');

}
