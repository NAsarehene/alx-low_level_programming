#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array.
 * @array: Pointer to an integer array.
 * @size: Size of the array.
 * @cmp: Pointer to the comparison function.
 *
 * Return: Index of the first element for which the comparison function
 *         returns a non-zero value, or -1 if no such element is found.
 */
	int int_index(int *array, int size, int (*cmp)(int))
	{
		int i;


		if (array == NULL || size <= 0 || cmp == NULL)
			return (-1);


		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
		return (-1);
	}
