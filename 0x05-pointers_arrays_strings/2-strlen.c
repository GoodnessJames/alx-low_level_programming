#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: The pointer to a string
 *
 * Return: Returns length of a string (@s)
 */
int _strlen(char *s)
{
	int str_len = 0;

	while (*s != '\0')
	{
		str_len++;
		s++;
	}
	return (str_len);
}

