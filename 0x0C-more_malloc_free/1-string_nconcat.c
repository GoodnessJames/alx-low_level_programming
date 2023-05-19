#include <stdlib.h>
#include "main.h"

/**
 * str_len - Gets the length of a string
 * @str: The string to be get the length
 *
 * Return: returns (len) on SUCCESS or (0) on FAILURE
 */
unsigned int str_len(char *str)
{
	unsigned int len = 0;

	if (str == NULL)
		return (0);

	while (str[len] != '\0')
		len++;
	return (len);
}

/**
 * *string_nconcat - Concatenates two strings
 * @s1: The destination string
 * @s2: The source string
 * @n: 'n' number of bytes to concatenate
 *
 * Return: returns (ptr) on SUCCESS
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int nLen, i, j;
	char *ptr;

	unsigned int len1 = str_len(s1);
	unsigned int len2 = str_len(s2);

	if (n >= len2)
		n = len2;
	nLen = len1 + n;

	ptr = (char *)malloc((nLen + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];
	for (j = 0; j < n; j++)
		ptr[i + j] = s2[j];
	ptr[i + j] = '\0';
	return (ptr);
	free(ptr);
}
