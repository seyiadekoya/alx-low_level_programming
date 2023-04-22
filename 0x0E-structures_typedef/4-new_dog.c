#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - This function creates a struct & copies the name & owner members
 * @name: struct variable that is passed.
 * @age: struct variable that is passed.
 * @owner: struct variable that is passed.
 * Return: A new-dog struct if successful and NULL if unsucessful.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog2;

	/*condition to ensure the program returns NULL if null is passed*/
	if (name == NULL || age == 0 || owner == NULL)
		return (NULL);
	/*Allocating memory for the new_dog structure*/
	new_dog2 = malloc(sizeof(dog_t));
	/*condition checking if malloc failed to free the allocated memory*/
	if (new_dog2 == NULL)
	{
		return (NULL);
	}
	/*Allocating memory to store the copy of name member in new_dog struct*/
	new_dog2->name = malloc(sizeof(char) * (strlen(name) + 1));
	/*condition checking if malloc failed to free the allocated memory*/
	if (new_dog2->name == NULL)
	{
		free(new_dog2);
		return (NULL);
	}
	/*copying the name value to the allocated memory*/
	strcpy(new_dog2->name, name);
	new_dog2->age = age;
	/*Allocating memory to store the copy of owner member in new_dog struct*/
	new_dog2->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	/*condition checking if malloc failed to free the allocated memory*/
	if (new_dog2->owner == NULL)
	{
		free(new_dog2->name);
		free(new_dog2);
		return (NULL);
	}
	/*copying the owner value to the allocated memory*/
	strcpy(new_dog2->owner, owner);
	return (new_dog2);
}
