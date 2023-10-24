#include "main.h"
/**
 * _strlen - char
 * @s: Sec
 * Return: `value
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
	for (j = mid; j < len; j++)
	{
		_putchar(str[j]);
	}
}
