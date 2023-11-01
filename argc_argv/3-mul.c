#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: first int
 * @argv: second char
 * Return: returns the multiplied numbers
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
