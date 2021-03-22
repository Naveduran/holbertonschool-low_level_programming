#include "lists.h"
/**
 * free_list - a function that frees a list_t list
 * @head: ..
 * Return:..
 */
void free_list(list_t *head)
{
	while (head)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
