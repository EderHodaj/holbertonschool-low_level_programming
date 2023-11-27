#include "lists.h"
#include <stddef.h>
#include <stdio.h>

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("[%u] %s\n", h->len, (h->str != NULL) ? h->str : "(nil)");
		count++;
		h = h->next;
	}

    return count;
}
