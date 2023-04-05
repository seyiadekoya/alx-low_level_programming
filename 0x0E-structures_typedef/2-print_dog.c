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
	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)\n");
	if (d->age <= 0)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);
	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)\n");
}
