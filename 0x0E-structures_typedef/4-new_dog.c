#include <stdio.h>
#include <stdlib.h>
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
	/*condition to ensure the program returns NULL if null is passed*/
	if (name == NULL || age == 0 || owner == NULL)
		return (NULL);
	/*Allocating memory for the new_dog structure*/
	dog_t *new_dog = malloc(sizeof(dog_t));
	/*condition checking if malloc failed to free the allocated memory*/
	if (new_dog == NULL)
	{
		return (NULL);
	}
	/*Allocating memory to store the copy of name member in new_dog struct*/
	new_dog->name = malloc(sizeof(char) * (strlen(name) + 1));
	/*condition checking if malloc failed to free the allocated memory*/
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	/*copying the name value to the allocated memory*/
	strcpy(new_dog->name, name);
	new_dog->age = age;
	/*Allocating memory to store the copy of owner member in new_dog struct*/
	new_dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	/*condition checking if malloc failed to free the allocated memory*/
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	/*copying the owner value to the allocated memory*/
	strcpy(new_dog->owner, owner);
	return (new_dog);
}
