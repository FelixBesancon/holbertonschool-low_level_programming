#include "lists.h"

/**
 * dlistint_len - Returns the number of elements
 * in a doubly linked dlistint_t list.
 * @h: A pointer to a constant dlistint_t list.
 * Return: the number of elements of the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes;

	for (nodes = 0; h != NULL; nodes++)
		h = h->next;
	return (nodes);
}
