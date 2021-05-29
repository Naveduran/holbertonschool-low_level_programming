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

/*if hash table doesn't exist or it's size is 0*/
	if (!ht || ht->size == 0)
		return (NULL);

/* if index doesn't exist */
	if (!ht->array[index])
		return (NULL);

	list_node = ht->array[index];
	while (list_node != NULL)
	{
		if (list_node->key == key)
			list_node->value = (char *) value;
		list_node = list_node->next;
	}

	return (NULL);
}
