#include "main.h"

/**
 * *_strcat - Concatenates two strings
 * @dest: The pointer to the destination buffer to append
 * @src: The source string to concatenate from
 *
 * Return: Returns a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
	dest_len++;

	for (index = 0; src[index]; index++)
	dest[dest_len++] = src[index];

	return (dest);
}
