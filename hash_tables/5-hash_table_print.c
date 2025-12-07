#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash_table_t table.
 * @ht: The hash_table_t table to print.
 *
 * Return: Void.
 */
void hash_table_print(const hash_table_t *ht)
{
	int found = 0;
	unsigned long int index;
	hash_node_t *tmp_node;

	if (ht != NULL)
	{
		printf("{");
		for (index = 0; index < ht->size; index++)
		{
			tmp_node = ht->array[index];
			while (tmp_node != NULL)
			{
				if (found == 1)
					printf(", ");
				else
					found = 1;
				printf("\'%s\': \'%s\'", tmp_node->key, tmp_node->value);
				tmp_node = tmp_node->next;
			}
		}
	printf("}\n");
	}
}
