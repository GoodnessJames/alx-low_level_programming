#include <stdlib.h>
#include "main.h"

/**
 * *_calloc - Allocates memory for an array, using malloc
 * @nmemb: The total number of elements in the array
 * @size: The total size alloctated in bytes
 *
 * Return: returns (ptr) on SUCCESS or (NULL) on FAILURE
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int calc_size, i;
	unsigned char *set_memb;
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	calc_size = nmemb * size;
	ptr = malloc(calc_size);
	if (ptr == NULL)
		return (NULL);
	set_memb = (unsigned char *)ptr;
	for (i = 0; i < calc_size; i++)
		set_memb[i] = 0;

	return (ptr);

}
