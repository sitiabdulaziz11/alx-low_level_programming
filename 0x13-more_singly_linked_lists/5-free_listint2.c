#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list.
 * @head: pointer
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head)
	{
		while (*head != NULL)
		{
			ptr = *head;
			*head = (*head)->next;
			free(ptr);
		}
	}
	else
		return;
	*head = NULL;
}
