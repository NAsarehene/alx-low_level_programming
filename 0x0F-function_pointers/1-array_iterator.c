#include "function_pointers.h"
	#include <stdio.h>
/**
* array_iterator - Iterates over an array and applies to each element.
* @array: Pointer to an integer array.
* @size: Size of the array.
* @action: Pointer to the action function to apply.
*
* Description: This function iterates over the given array and applies the
* provided action function to each element.
*/
	void array_iterator(int *array, size_t size, void (*action)(int))
	{
		unsigned int i;


		if (array == NULL || action == NULL)
			return;


		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
