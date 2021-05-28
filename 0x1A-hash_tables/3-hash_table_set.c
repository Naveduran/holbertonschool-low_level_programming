#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table.
 * @ht: he hash table you want to add or update
 * @key: key
 * @value: value associate with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index = key_index((unsigned const char *) key, ht->size);
	hash_node_t *new_node;

	if (!ht)
		return (0);

	new_node = (hash_node_t *) calloc(sizeof(hash_node_t), 1);
	new_node->value = (char *) value;

	if (ht->array[index])
	{/*si ya existia algo ahi ponga el new_node al inicio*/
		new_node->next = ht->array[index];
	} /*si no existia pongalo en el index*/
	ht->array[index] = new_node;
	return (1);
}
