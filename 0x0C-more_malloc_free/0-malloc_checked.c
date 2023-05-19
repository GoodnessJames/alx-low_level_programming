#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - Allocates memory using the malloc function
 * @b: The total size allocated in bytes
 *
 * Return: returns (ptr) on SUCCESS
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
