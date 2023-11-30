#include "lists.h"
/**
 * add_dnodeint - check the code
 * @head:fsdfs
 * @n:sdfsdf
 * Return: Always EXIT_SUCCESS.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		return (NULL);

	temp->prev = NULL;
	temp->n = n;
	temp->next = *head;

	if(*head != NULL)
		(*head)->prev = temp;

	*head = temp;

	return (temp);
}
