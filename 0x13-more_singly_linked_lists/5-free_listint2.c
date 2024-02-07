#include "lists.h"

/**
 * free_listint2 - This frees a list.
 * @head: this is a pointer to the first element.
 * Return: nothing.
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		ptr = *head;
		(*head) = (*head)->next;
		free(ptr);
	}
}
