#include "lists.h"
/**
 * *add_nodeint_end - a function that adds a new node at the end of a
 * listint_t list.
 * @head: pointer to the head node of the list
 * @n: integer
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *the_last_node;

/*si no me mandas argumentos retorname error*/
	if (head == NULL/*|| n == NULL*/)
		return (NULL);

/*alloca la memoria para la estructura*/
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
/*asigno el dato y la direccion del siguiente*/
	new_node->n = n;
	new_node->next = NULL;

/*si hay contenido del puntero recibido, entrar a */
	if (*head != NULL)
	{
/*lo que haya en el puntero asigneselo a last*/
		the_last_node = (*head);
		while (the_last_node->next != NULL)
			the_last_node = the_last_node->next;
		the_last_node->next = new_node;
		return (the_last_node->next);
	}
/*poner el nuevo en head para mandar la direccion del nuevo nodo*/
	*head = new_node;
	return (*head);
}
