#include "hash_tables.h"

/**
 * key_index - Gives the index of a key in hash_table_t table.
 * @key: The string containing the key.
 * @size: The size of the array of the hash_table_t table.
 *
 * Return: The index at which the key/value pair should be stored
 * in the array of the hash_table_t table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash, index;

	hash = hash_djb2(key);
	index = hash % size;
	return (index);
}
