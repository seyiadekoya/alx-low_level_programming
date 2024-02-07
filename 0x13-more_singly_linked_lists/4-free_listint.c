#include "lists.h"

/**
 * free_listint - This frees the list.
 * @head: the pointer to first element.
 * Return: nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
