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
	int index = 0;
	hash_node_t *new_node = NULL, *list_node = NULL;

	/*check key*/
	if (!key || key == NULL)
		return (0);
	/*if the table doesn't exist or is empty*/
	if (ht == NULL || ht->size == 0)
		return (0);
	index = key_index((unsigned const char *) key, ht->size);
	/*if the key already exist in any node of the list, update the value*/
	list_node = ht->array[index];
	while (list_node != NULL)
	{
		if (strcmp(list_node->key, key) == 0)/*they match*/
		{
			list_node->value = (char *) value;
			return (1);
		}
		list_node = list_node->next;
	}

	/*create a new node */
	new_node = create_new_node(key, value);
	/*if that index has a node already, save the reference to the next*/
	if (ht->array[index])
		new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
