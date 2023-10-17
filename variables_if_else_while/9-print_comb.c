#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int nr = 0;

	while (nr < 10)
	{
		putchar(nr + '0');
		if (nr != 9)
		{
			putchar(',');
			putchar(' ');
		}
		nr++;
	}
	putchar('\n');

	return (0);
}
