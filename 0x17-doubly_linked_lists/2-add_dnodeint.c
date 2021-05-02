#include "lists.h"
/**
 * add_dnodeint -  adds a new node at the beginning of a dlistint_t list
 * @h: head of the list
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
		return (NULL);
	if (*head == NULL)
	{
		*head = malloc(sizeof(dlistint_t));
			if (head == NULL)
			{
				dprintf(2, "Error: Can't malloc\n");
				return (NULL);
			}
		(*head)->n = n;
		(*head)->next = NULL;
		(*head)->prev = NULL;
		return (*head);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	new->next = *head;

	(*head)->prev = new;

	*head = new;
	return (new);
}
