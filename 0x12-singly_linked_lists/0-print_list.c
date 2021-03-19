#include "lists.h"
/**
 * print_list - ..
 * @h: ..
 * Return:..
 */
size_t print_list(const list_t *h)
{
	size_t length = 0;

	if (!h)
	{
		printf("[0] (nil)\n");
		length++;
	}
	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] (%s)\n", h->len, h->str);
		}
		length++;
		h = h->next;
	}
	return (length);
}
