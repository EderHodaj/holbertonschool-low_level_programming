#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - check the code
 * @head:sdfsdf
 * @str:sdfsdf
 * Return: Always 0.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		exit(EXIT_FAILURE);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		exit(EXIT_FAILURE);
	}

	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (NULL);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (new);
}
