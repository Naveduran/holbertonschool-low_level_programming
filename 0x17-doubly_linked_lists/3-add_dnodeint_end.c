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
	temp = *head;
	if (temp)
		while (temp->next != NULL)
			temp = temp->next;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (temp != NULL)
	{
		temp->next = new;
		new->prev = temp;
	}
	else
	{
		new->prev = NULL;
		*head = new;
	}
	return (new);
}
