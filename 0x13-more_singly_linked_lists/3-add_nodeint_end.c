#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at the end of a list.
 * @head: pointer to a pointer to the head of the list.
 * @n: integer value for the new node.
 *
 * Return: The ddress of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *now;

	ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
		return (*head);
	}
	else
	{
		now = *head;
		while (now->next != NULL)
		{
			now = now->next;
		}
		now->next = ptr;
	}
	return (ptr);
}
