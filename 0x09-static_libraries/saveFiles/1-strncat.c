#include "main.h"

/**
 * *_strncat - Concatenates n bytes of strings from @src to @dest
 * @dest: The pointer to the destination buffer to append
 * @src: The source string to concatenate from
 * @n: The number chracters to concatenate
 *
 * Return: Returns a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
