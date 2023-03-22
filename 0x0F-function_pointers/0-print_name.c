#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - function thats prints a name passed to it
 * @name: string to add
 * @f: A pointer to function
 *
 * Return: Nothing
*/
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f) /* if any is NULL */
		return;

	f(name);
}
