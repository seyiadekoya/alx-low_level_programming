#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - This function frees the memory allocated space for a struct.
 * @d: struct variable that is passed.
 */

void free_dog(dog_t *d)
{
	/*condition to ensure the program returns NULL if null is passed*/
	if (d == NULL)
		return;
	/*freeing the allocating memory for the passed structure*/
	free(d);
}
