#include <stdlib.h>

/**
 * *str_concat - Concatenates two strings (s1 & s2)
 * @s1: Pointer to destination string
 * @s2: Pointer to the source string
 *
 * Return: returns (NULL) on FAILURE or (ptStr) on SUCCESS
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i;
	char *ptStr;

	len1 = 0;
	while (s1[len1] != '\0')
		len1++;

	len2 = 0;
	while (s2[len2] != '\0')
		len2++;

	ptStr = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (ptStr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		ptStr[i] = s1[i];

	for (i = 0; i < len2; i++)
		ptStr[len1 + i] = s2[i];

	ptStr[len1 + len2] = '\0';

	return (ptStr);

	ptStr[i] = '\0';

	return (ptStr);
}
