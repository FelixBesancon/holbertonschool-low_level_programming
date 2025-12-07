#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash_table_t table.
 * @ht: A pointer to the hash_table_t table to delete.
 *
 * Return: Void.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *node_to_delete, *tmp_node;

	if (ht != NULL)
	{
		for (index = 0; index < ht->size; index++)
		{
			tmp_node = ht->array[index];
			while (tmp_node != NULL)
			{
				node_to_delete = tmp_node;
				free(node_to_delete->key);
				free(node_to_delete->value);
				tmp_node = tmp_node->next;
				free(node_to_delete);
			}
		}
		free(ht->array);
		free(ht);
	}
}
