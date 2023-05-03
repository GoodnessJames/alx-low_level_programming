#include "main.h"

/**
 * *_strcpy - Copies the string pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest
 * @dest: The pointer to the destination buffer
 * @src: Pointer to the string to be copied
 *
 * Return: Returns the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int index;

	char *pt_dest = dest;

	for (index = 0; ; index++)
	{
		dest[index] = src[index];
	}
	return (pt_dest);
}
