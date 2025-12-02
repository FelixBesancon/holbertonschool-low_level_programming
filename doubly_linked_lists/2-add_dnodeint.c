#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the begenning of a
 * doubly linked dlistint_t list.
 * @head: A pointer of a pointer to a dlistint_t.
 *
 * Return: The  adress of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_dlistint;

	new_dlistint = malloc(sizeof(dlistint_t));
	if (new_dlistint == NULL)
		return (NULL);
	new_dlistint->n = n;
	if (*head != NULL)
		(*head)->prev = new_dlistint;
	new_dlistint->next = *head;
	new_dlistint->prev = NULL;
	*head = new_dlistint;
	return (new_dlistint);
}
