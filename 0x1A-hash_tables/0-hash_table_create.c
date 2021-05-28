#include "hash_tables.h"

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
