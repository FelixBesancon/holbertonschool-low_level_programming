#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes the node at index 'index'
 * of a flistint_t doubly linked list.
 * @head: A pointer of a pointer to the first node of the
 * dlistint list.
 * @index: The position of the node to delete.
 *
 * Return: 1on success, -1 on failure.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node_to_delete;

	if (head == NULL || *head == NULL)
		return (-1);
	node_to_delete = *head;
	if (index == 0)
	{
		if ((node_to_delete)->next != NULL)
		{
			(node_to_delete->next)->prev = NULL;
			*head = node_to_delete->next;
		}
		else
			*head = NULL;
		free(node_to_delete);
		return (1);
	}
	while (index > 0 && node_to_delete != NULL)
	{
		node_to_delete = node_to_delete->next;
		index--;
	}
	if (node_to_delete == NULL)
		return (-1);
	if (node_to_delete->next == NULL)
		(node_to_delete->prev)->next = NULL;
	else
		(node_to_delete->prev)->next = node_to_delete->next;
	if (node_to_delete->prev == NULL)
		(node_to_delete ->next)->prev = NULL;
	else
		(node_to_delete->next)->prev = node_to_delete->prev;
	free(node_to_delete);
	return (1);
}
