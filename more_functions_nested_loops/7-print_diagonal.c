#include "main.h"
/**
 * print_line - function print line
 * @n: - parameter from input until when print _
 * main.h header file
 * Ose direkt fillo ciklin me 1 pa kushtet if / else
 * Return:0
 */

void print_diagonal(int n)
{
        int i;
	int j;

        if (n > 0)
        {
                for (i = 0; i < n; i++)
                {
			for (j = 0; j < i; j++)
                        {
				_putchar (' ');
			}
		_putchar ('\\');
              	_putchar ('\n');
		}
        }
        else
                _putchar ('\n');

}
