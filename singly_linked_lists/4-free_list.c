#include "lists.h"
/**
 * free_list - Frees a linked list_t list.
 * @head: A pointer to a list_t.
 *
 * Return: Void.
 */
void free_list(list_t *head)
{
	list_t *tmp_node, *next_node;

	tmp_node = head;
	while (tmp_node != NULL)
	{
		next_node = tmp_node->next;
		free(tmp_node->str);
		free(tmp_node);
		tmp_node = next_node;
	}
}
