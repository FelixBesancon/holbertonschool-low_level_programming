#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a node at a given position
 * into a doubly linked dlistint list.
 * @h: A pointer of a pointer to the first node of the dlistint list.
 * @idx: The index of the list where the node should be added,
 * the index start at 0.
 * @n: The integer to fill the new list with.
 *
 * Return: The adress of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *idx_node, *new_dlistint;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	idx_node = *h;
	idx--;
	while (idx > 0 && idx_node != NULL)
	{
		idx_node = idx_node->next;
		idx--;
	}
		if (idx_node == NULL)
			return (NULL);
		else if (idx_node->next == NULL)
			return (add_dnodeint_end(h, n));
			new_dlistint = malloc(sizeof(dlistint_t));
			if (new_dlistint == NULL)
				return (NULL);
			new_dlistint->n = n;
			new_dlistint->prev = idx_node;
			new_dlistint->next = idx_node->next;
			idx_node->next->prev = new_dlistint;
			idx_node->next = new_dlistint;
			return (new_dlistint);
}
