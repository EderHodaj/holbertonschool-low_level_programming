#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_dlistint - sdfsdf
 * @h:sdfsddf
 * Return:sdfsdf
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
