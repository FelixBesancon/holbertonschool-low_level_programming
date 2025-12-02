#include "lists.h"

/**
* get_dnodeint_at_index - Returns the nth node of a doubly dlistint_t
* linked list.
* @head: A pointer to the first node of the dlistint list.
* @index: The number of the element to return.
*
* Return: A pointer to the nth node of the list.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *n_node = head;

	while (index > 0 && n_node != NULL)
	{
		n_node = n_node->next;
		index--;
	}
	if (n_node == NULL)
		return (NULL);
	return (n_node);
}

