#include "hash_tables.h"

/**
 * hash_table_t - create a hash table
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
