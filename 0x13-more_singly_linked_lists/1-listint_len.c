#include "lists.h"

/**
 * listint_len - This lists the number of elements in a linked list
 * @h: The pointer to the first element
 * Return: returns the number of elements in a list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr = NULL;
	int total = 0;

	ptr = h;

	while (ptr != NULL)
	{
		total++;
		ptr = ptr->next;
	}
	return (total);
}
