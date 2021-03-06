#include "lists.h"
/**
 * sum_listint - a function that returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: a pointer to the head node of the list
 * Return: the sum of all the data (n) of a listint_t linked list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0, counter;

	if (!head)
		return (0);
	for (counter = 0; head; counter++)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
