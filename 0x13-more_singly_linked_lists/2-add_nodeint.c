#include "lists.h"
/**
 * add_nodeint - function that adds a new node at the beginning of a list.
 * @head: pointer to a pointer to the head of the list.
 * @n: integer value for the new node.
 *
 * Return: address of new element or null.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newn;

	newn = malloc(sizeof(listint_t));
	if (newn == NULL)
		return (NULL);
	newn->n = n;
	newn->next = *head;
	*head = newn;
	return (newn);
}
