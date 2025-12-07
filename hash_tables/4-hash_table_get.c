#include "hash_tables.h"

/** 
 * hash_table_get - Retrieves a value associated with a key
 * in a hash_table_t table.
 * @ht: The hash_table_t table to look into.
 * @key: The string containing the key to look for.
 *
 * Return: The value associated with the element, or NULL
 * if key couldn't be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned long int index;
	hash_node_t *tmp_node;

	if (ht == NULL || key == NULL || *key == '\0' || ht->array == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
    tmp_node = ht->array[index];
	while (tmp_node != NULL)
	{
		if (strcmp(tmp_node->key, key) == 0)
		    return (tmp_node->value);
		tmp_node = tmp_node->next;
    }
    return (NULL);
}
