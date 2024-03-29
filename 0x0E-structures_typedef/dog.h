#ifndef DOG_H
#define DOG_H

/**
* struct dog - This is a user defined structure that has 3 members
* @name: First member
* @age: Second member
* @owner: Third member
*
* Description - This structure stores data of the name, age & owner of a dog
*/

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
