#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list
 * @head: head of the list
 * @index: index of the list that should be added
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *temp;

	if (!(*head) || !head) /*si nos mandaron un puntero a null*/
		return (-1);
	temp = *head; /*usamos un temporal para recorrer*/
	for (i = 0; i < index; i++) /*buscar la posición*/
	{
		if (temp->next)
			temp = temp->next; /* me muevo al siguiente*/
		else /*llegué al final sin encontrar el index*/
		{
			return (-1);
		}
	} /* si salgo del for es que encontré el index */
	if (temp->prev == NULL) /*estoy al inicio de la lista*/
	{
		if (temp->next == NULL) /*si la lista tiene solo un nodo*/
		{
			free(temp);
			*head = NULL;
			return (1);
		}
		if (temp->next != NULL) /*si la lista tiene mas de un nodo*/
		{
			temp->next->prev = NULL; /*corro la cabeza*/
			*head = temp->next;
		}
	}
	else if (temp->next == NULL) /* estoy al final de la lista*/
	{
		temp->prev->next = NULL;
	}
	else /*estoy en la mitad de la lista*/
	{
		temp->prev->next = temp->next;
		temp->next->prev = temp->prev;
	}
	free(temp); /*liberar el nodo*/
	return (1);
}
