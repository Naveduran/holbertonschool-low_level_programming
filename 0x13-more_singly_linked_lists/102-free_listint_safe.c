#include "lists.h"
/**
 * free_listint_safe - a function that frees a listint_t list.
 * @h: the head node of the list
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temporary;
	size_t counter;

	if (!h)
		return (NULL);
	if (h != NULL)
		while (*h)
		{
			temporary = (*h)->next;
			free(*h);
			(*h) = temporary;
			counter++;
		}
	*h = NULL;
	return (counter);
}
