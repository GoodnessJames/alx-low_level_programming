#include "main.h"
#include <string.h>

/**
 * *_strcat - Concatenates two strings
 * @dest: The pointer to the destination buffer to append
 * @src: The source string to concatenate from
 *
 * Return: Returns a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int destLen = strlen(dest);
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[destLen + i] = src[i];
	dest[destLen + i] = '\0';

	return (dest);
}
