#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - Executes a function given as a parameter
 *		    on each element of an array
 * @array: An array pointer to integers
 * @size: Size of the array
 * @action: Pointer to the function to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL || size <= 0)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
