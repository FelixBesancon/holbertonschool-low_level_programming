#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data(n) of a
 * doubly dlistint list.
 * @head: A pointer to the first node of the dlistint list.
 *
 * Return: The sum of the data(n) of every node in the list.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *tmp_dlistint = head;

	while (tmp_dlistint != NULL)
	{
		sum += tmp_dlistint->n;
		tmp_dlistint = tmp_dlistint->next;
	}
	return (sum);
}
