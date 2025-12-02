#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a doubly
 * linked dlistint_t list.
 * @h: A pointer to a constant dlistint_t list.
 *
 * Return: The number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes;

	for (nodes = 0; h != NULL; nodes++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
