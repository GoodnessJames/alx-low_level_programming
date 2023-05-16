#include <stdlib.h>

/**
 * ***alloc_grid - Returns a pointer to a 2 dimensional array of integers
 * @width: Width of the array
 * @height: Height of the array
 *
 * Return: returns (NULL) on FAILURE or (ptArray) on SUCCESS
 */
int **alloc_grid(int width, int height)
{
	int **ptArray, h_index, w_index;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptArray = (int **)malloc(height * sizeof(int *));

	if (ptArray == NULL)
		return (NULL);

	for (h_index = 0; h_index < height; h_index++)
	{
		ptArray[h_index] = (int *)malloc(width * sizeof(int));

		if (ptArray[h_index] == NULL)
		{
		for (; h_index >= 0; h_index--)
			free(ptArray[h_index]);

		free(ptArray);
		return (NULL);
		}
	}

	for (h_index = 0; h_index < height; h_index++)
	{
		for (w_index = 0; w_index < width; w_index++)
			ptArray[h_index][w_index] = 0;
	}
	return (ptArray);
}
