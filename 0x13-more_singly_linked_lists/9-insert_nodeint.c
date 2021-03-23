#include "lists.h"
/**
 * *insert_nodeint_at_index - a function that inserts a new node at a given
 * position.
 * @head: a pointer to the head node of the list
 * @idx: the index of the list where the new node should be added, starts at 0.
 * @n: data to assign at the new node
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temporary_head, *temporary_next;
	unsigned int counter;

	if (!head || !*head)
		return (NULL);
	if (idx == 0)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
		return (NULL);
		new_node->n = n, new_node->next = *head, *head = new_node;
		return (new_node);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	temporary_head = *head;
	for (counter = 0; counter < (idx - 1); counter++)
	{
		*head = (*head)->next;
		if (*head == NULL)
			return (NULL);
	}
	temporary_next = (*head)->next;
	(*head)->next = new_node, new_node->n = n;
	new_node->next = temporary_next, *head = temporary_head;
	return (new_node);
}
