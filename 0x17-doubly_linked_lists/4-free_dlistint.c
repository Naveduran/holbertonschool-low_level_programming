#include "lists.h"

/**
 * free_dlistint -  frees a dlistint_t list.
 * @head: head of the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head;
	if (temp)
		while (temp->next != NULL)
		{
			temp = temp->next;
			free(temp->prev);
		}
	free(temp);
}
