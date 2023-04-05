#include <stdlib.h>
#include "lists.h"

/**
  * free_list - Frees a linked list
  * @head:first node
  * Return: Nothing
  */
void free_list(list_t *head)
{
	list_t *p;

	while (head)
	{
		p = head;
		head = head->next;
		free(p->str);
		free(p);
	}

	free(head);
}
