#include "lists.h"
/**
 * *insert_nodeint_at_index - a function that inserts a new node at a given
 * position.
 * @head: a pointer to the head node of the list
 * @idx: the index of the list where the new node should be added.
 * Index starts at 0
 * @n: data to assign at the new node
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temporary_head, *temporary_next;
	unsigned int counter;

/* if there are not parameters return NULL and stop*/
	if (!head || !idx || !n)
		return (NULL);
/*allocate space of memory for the new node and confirm it is done*/
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
/*save the head in temporary variable*/
	temporary_head = *head;
/*walk through the list until you reach the index minus one */
	for (counter = 0; counter < (idx - 1); counter++)
	{
		*head = (*head)->next;
		if (*head == NULL)
			return (NULL);
	}
/*save temporarily the direction saved in the next position to assign later*/
	temporary_next = (*head)->next;
/*assign the direction of the new node to the next of the previus node*/
	(*head)->next = new_node;
/*assign the data to be stored in the new_node*/
	new_node->n = n;
/*assign the direction of the next of the new node*/
	new_node->next = temporary_next;
/*assign temporary back to the head variable */
	*head = temporary_head;
	return (new_node);
}
