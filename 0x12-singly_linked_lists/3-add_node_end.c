#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
  * _strlen - gets length of the string
  * @s: string
  * Return: length of the string
  */
int _strlen(const char *s)
{
	int j;

	for (j = 0; s[j]; j++)
		;
	return (j);
}
/**
  * _strdup - recreation of string duplicate function
  * @src: source of string to duplicate
  * Return: pointer to malloc'd space with copied string
  */
void *_strdup(const char *src)
{
	int len, j;
	char *d;

	len = _strlen(src);
	d = malloc((len + 1) * sizeof(char));
	if (d == NULL)
		return (NULL);
	for (j = 0; src[j]; j++)
		d[j] = src[j];
	d[j] = '\0';
	return (d);
}
/**
  * add_node_end - add new nodes
  * @head:string head
  * @str: string
  * Return: pointer to current position in list
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *later, *now;
	char *d;

	if (str == NULL)
		return (NULL);
	d = _strdup(str);
	if (d == NULL)
		return (NULL);
	later = malloc(sizeof(list_t));
	if (later == NULL)
		return (NULL);
	later->str = d;
	later->len = _strlen(str);
	later->next = NULL;

	if (*head == NULL)
	{
		*head = later;
		return (*head);
	}
	now = *head;
	while (now->next != NULL)
		now = now->next;
	now->next = later;
	return (*head);
}
