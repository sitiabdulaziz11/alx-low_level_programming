#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index.
 * @head: pointer.
 * @index: index.
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *currt, *prev;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	currt = *head;
	prev = NULL;

	if (index == 0)
	{
		*head = (*head)->next;
		free(currt);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		if (currt == NULL)
			return (-1);

		prev = currt;
		currt = currt->next;
	}
	if (currt == NULL)
		return (-1);
	prev->next = currt->next;
	free(currt);
	return (-1);
}

