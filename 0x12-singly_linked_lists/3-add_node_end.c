#include "lists.h"

/**
 * add_node_end - a function that adds a new node at the end of a list.
 * @head: head.
 * @str: string.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nnode, *cptr;

	if (str == NULL && head == NULL)
		return (NULL);
	nnode = malloc(sizeof(list_t));
	if (nnode == NULL)
		return (NULL);
	nnode->str = strdup(str);
	if (nnode->str == NULL)
	{
		free(nnode);
		return (NULL);
	}

	nnode->len = strlen(str);
	nnode->next = NULL;

	if (*head == NULL)
		*head = nnode;
	else
	{
		cptr = *head;
		while (cptr->next != NULL)
		{
			cptr = cptr->next;
		}
		cptr->next = nnode;
	}
	return (nnode);
}
