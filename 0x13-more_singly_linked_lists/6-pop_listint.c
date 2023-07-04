#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a list.
 * @head: pointer
 *
 * Return:  The head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int data = 0;

	if (*head == NULL)
		return (0);

	ptr = *head;
	data = (*head)->n;
	*head = (*head)->next;
	free(ptr);
	return (data);
}


