#include "lists.h"
/**
 * *add_node - Write a function that adds a new node at the beginning
 * of a list_t list.
 * @head: ..
 * @str: ..
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = NULL;
	unsigned int length;

	if (head == NULL || str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	for (length = 0; str[length]; length++)
	{
	}
	new->len = length;
	new->next = *head;
	*head = new;
	return (new);
}
