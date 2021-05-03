#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of the list
 * @n: data inside the new node
 * @idx: index of the list where the new node should be added
 * Return: the address of the new element at idx, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *temp;
	unsigned int i;

	if (!h)
		return (NULL);
	temp = *h;
	if (temp)
		for (i = 0; temp->next != NULL && i <= idx; i++)
			temp = temp->next;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}
	new->n = n;
	new->prev = temp->prev;
	new->next = temp;

	temp->prev = new;
	temp->next->prev = new;

	return (new);
}
