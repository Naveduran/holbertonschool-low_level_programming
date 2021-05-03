#include "lists.h"

/**
 * get_dnodeint_at_index -  returns the nth node of a dlistint_t linked list
 * @head: head of the list
 * @index: is the index of the node, starting from 0
 * Return: nth node of a dlistint_t linked list, if the node does not exist,
 * return NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *node;

	if (!head)
		return (NULL);
	node = head;
	for (i = 0; i < index ; i++)
	{
		node = node->next;
		if (node == NULL)
			return (NULL);
	}
	return (node);
}
