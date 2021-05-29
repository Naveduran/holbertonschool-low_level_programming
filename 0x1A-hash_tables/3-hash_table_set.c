#include "hash_tables.h"

/**
 * search_in_list - search a key in a linked list
 * @ht: pointer to hash_table
 * @key: key to search
 * @possition: possition in hash table
 * Return: 1 if match 0 if not
 */
int search_in_list(hash_table_t *ht, const char *key, unsigned int possition)
{
	hash_node_t *initial_point = ht->array[possition];

	for (; ht->array[possition];)
	{
		if ((strcmp(ht->array[possition]->key, key)) == 0)
			return (0);
		ht->array[possition] = ht->array[possition]->next;
	}
	ht->array[possition] = initial_point;
	return (1);
}

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
	hash_node_t *new_node = NULL;

	/*if the table doesn't exist or is empty*/
	if (!ht || ht->size < 1)
		return (0);

	/*if the key already exist update the value*/
	if ((search_in_list(ht, key, index)) == 0)
	{
		ht->array[index]->value = (char *) value;
		return (1);
	}

	/*create a new node */
	new_node = create_new_node(key, value);

	/*if that index has a node already, save the reference to the next*/
	if (ht->array[index])
		new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
