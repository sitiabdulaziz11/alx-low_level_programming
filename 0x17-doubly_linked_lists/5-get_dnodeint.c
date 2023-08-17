#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node of a list.
 * @head: head
 * @index: index
 * Return: node @index.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int t;

	t = 0;
	while (head != NULL)
	{
		if (t == index)
			return (head);
		head = head->next;
		t++;
	}
	return (NULL);
}
