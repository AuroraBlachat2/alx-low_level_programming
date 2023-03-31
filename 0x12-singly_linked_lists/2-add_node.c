#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to a pointer to the head of the list
 * @str: string to be added to the new node
 *
 * Return: pointer to the new head of the list
 */
list_t *add_node(list_t **head, const char *str)
{
	char *p;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	p = strdup(str);
	if (p == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = p;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
