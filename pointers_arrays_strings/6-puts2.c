#include "main.h"
/**
 * puts2 - EXX6
 * @str: point
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2)
		_putchar (str[i]);
		i++;
	}
	_putchar ('\n');
}
