#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * *_strstr - Locates a substring
 * @haystack: Pointer to a string to search
 * @needle: Pointer to a string of bytes
 *
 * Return: Returns (haystack) or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int count1, count2;

	int needle_len = strlen(needle);
	int haystack_len = strlen(haystack);

	if (needle_len == 0)
		return (haystack);
	for (count1 = 0; count1 <= haystack_len - needle_len; count1++)
	{
		for (count2 = 0; count2 < needle_len; count2++)
		{
			if (haystack[count1 + count2] != needle[count2])
				break;
		}
		if (count2 == needle_len)
			return (&haystack[count1]);
	}

	return (NULL);
}
