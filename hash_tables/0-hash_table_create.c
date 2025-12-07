#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table using
 * hash_table_s/t and hash_node_s/t structure/type.
 * @size: The size of the array to create.
 *
 * Return: A pointer to the newly created hash table,
 * return NULL if something went wrong.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	hash_node_t **array;

	if (size == 0)
		return (NULL);
	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	array = calloc(size, sizeof(hash_node_t *));
	if (array == NULL)
	{
		free(ht);
		return (NULL);
	}
	ht->size = size;
	ht->array = array;
	return (ht);
}
