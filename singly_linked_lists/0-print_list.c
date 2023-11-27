#include "lists.h"
#include <stddef.h>
#include <stdio.h>

size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h->str == NULL)
		printf("(nil)");
	printf("%s", h->str);
	printf("%d", h->len);

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

    return count;
}
