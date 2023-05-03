#include "main.h"

/**
 * *_strcpy - Copies the string pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest
 * @dest: The pointer to the destination buffer
 * @src: Pointer to the string to be copied
 *
 * Return: Returns the value @dest
 */
char *_strcpy(char *dest, const char *src)
{
	int len = 0;
	int index = 0;

	while (src[len] != '\0')
		len++;
	for (; index < len; index++)
		dest[index] = src[index];
	dest[len] = '\0';
	return (dest);
}
