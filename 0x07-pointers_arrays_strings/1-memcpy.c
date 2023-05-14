#include "main.h"

/**
 * *_memcpy - Copies memory area from src to dest
 * @dest: Pointer to the destination buffer
 * @src: Pointer to the source to copy from
 * @n: Number of bytes to copy
 *
 * Return: Return (dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
		dest[count] = src[count];
	return (dest);
}
