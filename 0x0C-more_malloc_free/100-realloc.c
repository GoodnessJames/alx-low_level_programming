#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - Reallocates a memory block using malloc and free function
 * @ptr: The pointer to the memory previously allocated
 * @old_size: The size, in bytes, of the allocated space for ptr
 * @new_size: The new size, in bytes of the new memory block
 *
 * Return: returns (ptr) on SUCCESS
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *ptNew;
	char *prev_mem, *realloc_mem;

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	ptNew = malloc(new_size);

	if (ptNew == NULL)
		return (NULL);

	prev_mem = (char *)ptr;
	realloc_mem = (char *)ptNew;

	for (i = 0; i < old_size && i < new_size; i++)
		realloc_mem[i] = prev_mem[i];

	free(ptr);
	return (ptNew);
}
