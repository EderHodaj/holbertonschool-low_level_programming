#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node - check the code
 * @head:sdfsdf
 * @str:sdfsdf
 * Return: Always 0.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (str == NULL)
		return (NULL);

	if (new == NULL)
		exit(EXIT_FAILURE);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		exit(EXIT_FAILURE);
	}
	new->len = strlen(str);

	new->next = *head;
	*head = new;

	return (new);
}
