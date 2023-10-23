#include "main.h"
/**
 * print_rev - exx4
 * @s:variable
 */

void print_rev(char *s)
{
	int i = 0;
	int length, last_index;

	while (s[i] != '\0')
	{
		i++;
		last_index = i - 1;
	}
	for (length = last_index; length >= 0; length--)
		_putchar (s[length]);
}
