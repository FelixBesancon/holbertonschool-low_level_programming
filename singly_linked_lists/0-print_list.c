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
	char *current_str = h->str;
	unsigned int current_len = h->len;
	const list_t *current_list = h;

	for (nodes = 0; current_list != NULL; nodes++)
	{
		if (current_list->str == NULL)
		{
			current_str = strdup("(nil)");
			current_len = 0;
		}
		else
		{
			current_str = current_list->str;
			current_len = current_list->len;
		}
		printf("[%u] %s\n", current_len, current_str);
		current_list = current_list->next;
	}
	return (nodes);
}
