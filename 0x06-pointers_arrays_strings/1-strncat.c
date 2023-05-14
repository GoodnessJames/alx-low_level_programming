#include "main.h"
#include <string.h>

/**
 * *_strncat - Concatenates n bytes of strings from @src to @dest
 * @dest: The pointer to the destination buffer to append
 * @src: The source string to concatenate from
 * @n: The number chracters to concatenate
 *
 * Return: Return (dest)
 */
char *_strncat(char *dest, char *src, int n)
{
	int destLen = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[destLen + i] = src[i];
	dest[destLen + i] = '\0';

	return (dest);
}
