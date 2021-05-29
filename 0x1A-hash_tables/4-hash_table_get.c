#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: key you are looking for
 * Return: the value associated with the element, or NULL if key wasn't found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index = key_index((unsigned const char *) key, ht->size);
	hash_node_t *elem_in_list;

	if (ht->array[index])
	{
		if (ht->array[index]->key == key)
			return (ht->array[index]->value);

		elem_in_list = ht->array[index]->next;
		while (elem_in_list->next)
		{
			if (elem_in_list->key == key)
				return (elem_in_list->value);
			elem_in_list = elem_in_list->next;
			}
	}
	return (NULL);
}
