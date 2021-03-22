#include "lists.h"
/**
 * *add_node_end - Write a function that adds a new node at the beginning
 * of a list_t list.
 * @head: head of the list
 * @str: string to assign as data of the new node
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;
	unsigned int length;

	if (head == NULL || str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	for (length = 0; new->str[length]; length++)
	{
	}
	new->len = length;
	new->next = NULL;
	if (*head != NULL)
	{
		last = malloc(sizeof(list_t));
		if (!last)
			return (NULL);
		last = (*head);
		while (last->next != NULL)
			last = last->next;
		last->next = new;
		return (last->next);
	}
	*head = new;
	return (*head);
}
