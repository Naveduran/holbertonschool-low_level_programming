#include "hash_tables.h"

/**
 * key_index - a function that gives you the index of a key.
 * @key: the key
 * @size: size of the array of the hash table
 * Return:  the index of a key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int key_index =	hash_djb2(key);

	if (key_index > size)
	{
		key_index = key_index % size;
	}
	return (key_index);
}
