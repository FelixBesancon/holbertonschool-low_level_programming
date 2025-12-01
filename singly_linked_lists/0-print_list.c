#include "lists.h"

/**
 * print_list - Prints all the elements of a linked list_t list,
 * if str is NULL, "[0] (nil)" is printed.
 * @h: A pointer to a constant list_t list.
 *
 * Return: The number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t nodes;

	for (nodes = 0; h != NULL; nodes++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	return (nodes);
}
