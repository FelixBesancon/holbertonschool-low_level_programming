#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash_table_t table,
 * in case of collision, the new node is added at the beginning.
 * @ht: A pointer to the hash_table_t table where the key/value
 * should be added/updated.
 * @key: The string containing the key.
 * @value: The value associated with the key, could be an empty string
 * and if not, must be duplicated.
 *
 * Return: 1 on success, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node_to_add, *tmp_node = NULL;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	tmp_node = ht->array[index];
	while (tmp_node != NULL)
	{
		if (strcmp(tmp_node->key, key) == 0)
		{
			free(tmp_node->value);
			tmp_node->value = strdup(value);
			if (tmp_node->value == NULL)
				return (0);
			return (1);
		}
		tmp_node = tmp_node->next;
	}
	node_to_add = malloc(sizeof(hash_node_t));
	if (node_to_add == NULL)
		return (0);
	ht->array[index] = node_to_add;
	node_to_add->key = strdup(key);
	if (node_to_add->key == NULL)
	{
		free(node_to_add);
		return (0);
	}
	node_to_add->value = strdup(value);
	if (node_to_add->value == NULL)
	{
		free(node_to_add->key);
		free(node_to_add);
		return (0);
	}
	node_to_add->next = ht->array[index];
	ht->array[index] = node_to_add;
	return (1);
}
