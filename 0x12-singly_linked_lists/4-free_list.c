#include "lists.h"

/**
 * free_list - a function that frees a list_t list.
 * @head: head
 */
void free_list(list_t *head)
{
	list_t *cptr, *next;

	cptr = head;

	while (cptr != NULL)
	{
		next = cptr->next;
		free(cptr->str);
		free(cptr);
		cptr = next;
	}
}
