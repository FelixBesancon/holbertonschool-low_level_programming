#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a
 * doubly linked dlistint_t list.
 * @head: A pointer of a pointer to a dlistint_t.
 * @n: An integer to fill the new node with.
 *
 * Return: The adress of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_dlistint, *tmp_dlistint;

	new_dlistint = malloc(sizeof(dlistint_t));
	if (new_dlistint == NULL)
		return (NULL);
	new_dlistint->n = n;
	new_dlistint->prev = NULL;
	new_dlistint->next = NULL;
	if (*head == NULL)
		*head = new_dlistint;
	else
	{
		tmp_dlistint = *head;
		while (tmp_dlistint->next != NULL)
			tmp_dlistint = tmp_dlistint->next;
		new_dlistint->prev = tmp_dlistint;
		tmp_dlistint->next = new_dlistint;
	}
	return (new_dlistint);
}
