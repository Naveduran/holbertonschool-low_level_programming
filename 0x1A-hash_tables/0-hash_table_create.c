#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: number of indexes that the hash table can contain
 * Return: pointer to the created structure
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htable = malloc(sizeof(hash_table_t));

	if (htable == NULL)
		return (NULL);

	htable->size = size;

	htable->array = calloc(sizeof(hash_node_t *), size);
	if (htable->array == NULL)
		return (NULL);

	return (htable);
}

/**
 * create_new_node - creates a new node, assign key and value
 * @key: key
 * @value: value
 * Return: pointer to the new_node
 */

hash_node_t *create_new_node(const char *key, const char *value)
{
	hash_node_t *new_node;
/*create a new node */
	new_node = (hash_node_t *) malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);

/*assign value and key*/
	new_node->value = strdup((char *) value);
	new_node->key = strdup((char *) key);
	new_node->next = NULL;
	return (new_node);
}
