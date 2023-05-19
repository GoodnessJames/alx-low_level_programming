#include <stdlib.h>
#include "main.h"

/**
 * *array_range - Creates an array of integers
 * @min: The minimum number of values
 * @max: The maximum number of values
 *
 * Return: returns (ptr) on SUCCESS or (NULL) on FAILURE
 */
int *array_range(int min, int max)
{
	int *ptArray, i, size;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;

	ptArray = malloc(size * sizeof(int));

	if (ptArray == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptArray[i] = min++;

	return (ptArray);

}
