#include "lists.h"
/**
 * free_dlistint - Frees a doubly linked
 * dlistint_t list.
 * @head: A pointer to a dlistint_t.
 *
 * Return: Void.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp_node, *next_node;

	tmp_node = head;
	while (tmp_node != NULL)
	{
		next_node = tmp_node->next;
		free(tmp_node);
		tmp_node = next_node;
	}
}
