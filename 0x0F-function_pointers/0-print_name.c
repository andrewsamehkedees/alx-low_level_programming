#include "function_pointers.h"
#include <stdio.h>
/**
* print_name - prints a name using a function
* @name: name
* @f: function
* Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return ();

	f(name);
}
