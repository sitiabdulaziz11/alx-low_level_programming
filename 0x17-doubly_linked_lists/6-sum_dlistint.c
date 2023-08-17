#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data (n) of a list.
 * @head: head
 *
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int res = 0;

	while (head != NULL)
	{
		res += head->n;
		head = head->next;
	}
	return (res);
}
