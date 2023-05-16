#include <stdlib.h>

/**
 * *_strdup - Returns a pointer to a newly allocated space in memory, which
 *	      contains a copy of the string given as a parameter
 * @str: Pointer to a string of characters
 *
 * Return: returns (NULL) on FAILURE or (ptStr) on SUCCESS
 */
char *_strdup(char *str)
{
	int len, i;
	char *ptStr;

	len = 0;
	while (str[len] != '\0')
		len++;
	ptStr = (char *)malloc((len + 1) * sizeof(char));

	if (ptStr == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		ptStr[i] = str[i];

	ptStr[i] = '\0';

	return (ptStr);
}
