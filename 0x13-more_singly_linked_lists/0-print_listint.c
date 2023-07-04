#include "lists.h"
/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: head.
 *
 * Return: number of node.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *newn;
	size_t k;

	newn = malloc(sizeof(listint_t));
	if (newn == NULL)
		return (-1);
	newn = h;
	k = 0;
	while (newn != NULL)
	{
		printf("%d\n", newn->n);
		newn = newn->next;
		k++;
	}
	return (k);
}
