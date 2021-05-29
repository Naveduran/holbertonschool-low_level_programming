#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: key you are looking for
 * Return: the value associated with the element, or NULL if key wasn't found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index = 0;
	hash_node_t *list_node;

/*if hash table doesn't exist or it's size is 0*/
	if (!ht || ht->size == 0)
		return (NULL);

	index = key_index((unsigned const char *) key, ht->size);

/* if index doesn't exist */
	if (!ht->array[index])
		return (NULL);

	list_node = ht->array[index];
	while (list_node != NULL)
	{
		if (strcmp(list_node->key, key) == 0)/*they match*/
			return (list_node->value);
		list_node = list_node->next;
	}

	return (NULL);
}
