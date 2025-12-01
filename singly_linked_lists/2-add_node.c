#include "lists.h"
/**
 * add_node - Adds a new node at the begenning of a linked list_t list.
 * @head: A pointer of a pointer to a list_t.
 * @str: A constant string to duplicate in the new node.
 *
 * Return: The  adress of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_list;
	unsigned int i;

	new_list = malloc(sizeof(list_t));
	if (new_list == NULL)
		return (NULL);
	new_list->str = strdup(str);
	if (new_list->str == NULL)
	{
		free(new_list);
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
		i++;
	new_list->len = i;
	new_list->next = *head;
	*head = new_list;
	return (new_list);
}
