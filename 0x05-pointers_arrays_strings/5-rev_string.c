#include "main.h"
#include <string.h>

/**
 * rev_string -   Reverses a string
 * @s: The pointer to a string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len = strlen(s);

	int index_start, index_end;
	char tmp;

	for (index_start = 0, index_end = len - 1; index_start < index_end;
		index_start++, index_end--)
	{
		tmp = s[index_start];
		s[index_start] = s[index_end];
		s[index_end] = tmp;
	}
}
