#include <stdio.h>
#include "dog.h"
/**
* init_dog - This function initializes a variable of type struct dog.
* @d: struct dog variable to be initialized.
* @name: member to store the name of the dog.
* @age: member to store the age of the dog.
* @owner: member to store the owner of the dog.
* return - void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
