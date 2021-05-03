#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index of a linked list
 * @head: head of the list
 * @index: index of the list that should be added
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	if (!head || !(*head)->next)
		return (-1);
	temp = *head;
	for (i = 0; temp->next != NULL && i < index; i++)
	{
		temp = temp->next;
	}
	if (index == 0)
	{
		if ((*head)->next)
		{
			*head = (*head)->next;
		}
		else
		{
			free(temp);
			return (1);
		}
	}
	else
	{
		temp->prev->next = temp->next;
		temp->next->prev = temp->prev;
	}
	free(temp);
	return (1);
}
