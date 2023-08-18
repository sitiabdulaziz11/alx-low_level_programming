#include "main.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at index of a list.
 * @head: head
 * @index: index
 *
 * Returns: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int cou;
	
	if (*head == NULL)
		return (-1);

	ptr = *head;
	cou = 0;
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(ptr);
		return (1);
	}
	if (ptr == NULL)
		return (-1);
	while (ptr != NULL && cou < index)
	{
		ptr = ptr->next;
		cou++;
	}
	if (ptr->prev != NULL)
		ptr->prev->next = ptr->next;
	if (ptr->next != NULL)

