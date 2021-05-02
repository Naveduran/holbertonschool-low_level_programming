#include "lists.h"

/**
 * add_dnodeint_end -  adds a new node at the end of a dlistint_t list
 * @head: head of the list
 * @n: data inside the new node
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *temp;

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
		(*head)->n = n, (*head)->next = NULL, (*head)->prev = NULL;
		return (*head);
	}
	temp = malloc(sizeof(dlistint_t));
	if (head == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}
	temp = *head;
	while ((*head)->next != NULL)
	{
		*head = ((*head)->next);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}
	new->n = n, new->prev = *head, new->next = NULL;

	(*head)->next = new, *head = temp, free(temp);
	return (new);
}
