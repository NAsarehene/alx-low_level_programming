#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name using a function pointer.
 * @name: The name to be printed.
 * @f: Pointer to a function that prints a string.
 *
 * This function takes a string 'name' and a function pointer 'f'.
 * If 'name' and 'f' are not NULL, it calls the function pointed to by 'f'
 * to print the 'name'.
 */
void print_name(char *name, void (*f)(char *))
	{
		if (name == NULL || f == NULL)
			return;


		f(name);
	}
