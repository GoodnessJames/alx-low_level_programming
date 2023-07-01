#include "main.h"
#include <stddef.h>

/**
 * *_strchr - Locates a character in a string
 * @s: Pointer to a string to search
 * @c: The character to locate in the string, @s
 *
 * Return: Return (s) or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	else
		return (NULL);
}
