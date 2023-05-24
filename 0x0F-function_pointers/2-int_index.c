#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - Searches for an integer in an array of integers
 * @array: An array pointer to integers
 * @size: Size of the array
 * @cmp: Pointer to the function to be used to compare values
 *
 * Return: returns (-1) on FAILURE or (i) on SUCCESS
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
