#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at the beginning of a list.
 * @head: head of list.
 * @n: data
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newn;

	newn = malloc(sizeof(dlistint_t));
	if (newn == NULL)
		return (NULL);
	newn->n = n;
	newn->next = *head;
	newn->prev = NULL;

	if (*head != NULL)
		(*head)->prev = newn;
	*head = newn;
	return (newn);
}


