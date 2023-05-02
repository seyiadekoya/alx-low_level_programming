#include "function_pointers.h"
#include <stdio.h>
/**
* print_name - function takes a char string & func pointer as an argument,
* calls the function passed and returns void.
* @f: function pointer variable.
* @name: char string variable to be used
* Return - void
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	f(name);
}
