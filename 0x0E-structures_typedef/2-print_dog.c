#include <stdio.h>
#include "dog.h"
/**
* print_dog - This function prints formatted details of the type struct dog.
* @d: struct dog variable to be printed.
* return - void
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
