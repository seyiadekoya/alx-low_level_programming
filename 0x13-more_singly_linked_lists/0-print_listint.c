#include "lists.h"

/**
 * print_listint - This prints all the elements in a list.
 * @h: This is a pointer to the first element.
 * Return: the total number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr = NULL;
	int total = 0;

	ptr = h;

	while (ptr != NULL)
	{
		if (ptr == NULL)
			printf("0");
		else
			printf("%d\n", ptr->n);
		total++;
		ptr = ptr->next;
	}
	return (total);
}
