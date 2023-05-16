#include <stdlib.h>

/**
 * *create_array -  Creates an array of char, and initializes it with
 *		    a specific char
 * @size: The size of the array
 * @c: The char to be initialized to the array
 *
 * Return: returns (NULL) on FAILURE or (ptArray) on SUCCESS
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptArray;

	unsigned int n = size;

	if (n == 0)
		return (NULL);

	ptArray = (char *)malloc(n * sizeof(char));

	if (ptArray == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
	{
		ptArray[i] = c;
	}
	return (ptArray);
}
