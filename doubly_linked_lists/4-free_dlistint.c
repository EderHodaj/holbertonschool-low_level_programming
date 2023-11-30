#include "lists.h"
/**
 * free_dlistint - sdfsd
 * @head:sfsdf
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *next;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
