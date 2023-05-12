#include "main.h"

/**
 * *_memset -  Fills the memory with a constant byte
 * @s: Pointer to a string of characters
 * @b: The constant byte
 * @n: Number of bytes
 *
 * Return: Return (s)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
		s[count] = b;
	return (s);
}
