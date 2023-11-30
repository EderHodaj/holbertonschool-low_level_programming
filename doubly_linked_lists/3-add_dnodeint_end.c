#include "lists.h"
/**a
 * add_dnodeint_end - sdfsd
 * @head:sfsdf
 * @n:dsgsdf
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *tp;
	temp = malloc(sizeof(dlistint_t));
	
	if (temp == NULL)
		return (NULL);

	temp->next = NULL;
	temp->n = n;

	if (*head == NULL)
	{
		temp->prev = NULL;
		*head = temp;
	}
	else
	{
	tp = *head;

	while (tp->next != NULL)
		tp = tp->next;
	tp->next = temp;
	temp->prev = tp;
	}
	return (temp);
}
