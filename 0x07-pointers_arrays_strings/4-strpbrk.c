#include "main.h"
#include <stddef.h>

/**
 * *_strpbrk - Searches a string for any of a set of bytes
 * @s: Pointer to a string to search
 * @accept: Pointer to a string of bytes
 *
 * Return: Returns (s) or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
