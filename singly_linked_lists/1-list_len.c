#include "lists.h"
/**
 * list_len - Returns the number of elements in a linked list_t list.
 * @h: A pointer to a constant list_t list.
 * Return: the number of elements of the list.
 */
size_t list_len(const list_t *h)
{
	size_t nodes;

	for (nodes = 0; h != NULL; nodes++)
		h = h->next;
	return (nodes);
}
