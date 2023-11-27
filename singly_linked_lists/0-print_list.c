#include "lists.h"
#include <stddef.h>
#include <stdio.h>

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("[%u]\n", h->len);
		if (h->str != NULL)
			printf("%s\n", h->str);
		else
			printf("(nil)");
			
		count++;
		h = h->next;
	}

    return count;
}
