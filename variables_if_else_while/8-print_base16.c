#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int nr = 0;
	char letters = 'a';

	while (nr < 10)
	{
		putchar(nr + '0');
		nr++;
	}
	while (letters <= 'f')
	{
		putchar(letters);
		letters++;
	}
	putchar('\n');

	return (0);
}
