#include "lists.h"
/**
 * sum_listint - function that returns the sum of all the data (n) of alist.
 * @head: pointer.
 *
 * Return: sum of all the data (n).
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr;

	if (head == NULL)
		return (0);

	ptr = head;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
