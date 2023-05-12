#include "main.h"

/**
 * wildcmp - Compares two strings
 * @s1: Pointer to the first string to be compared
 * @s2: Pointer to the second string to be compared
 *
 * Return: Returns (*s1 == '\0'), (1), (wildcmp(s1, s2 + 1)),
 *		   (wildcmp(s1, s2 + 1)), (wildcmp(s1 + 1, s2 + 1)) or (0)
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
		return (*s1 == '\0');
	if (*s2 == '*')
	{
		if (wildcmp(s1, s2 + 1))
		{
			return (1);
		}
		if ((*s1 != '\0') && wildcmp(s1 + 1, s2))
		{
			return (1);
		}
		return (0);
	}
		if (*s1 == '\0')
		{
			return (0);
		}
		if (*s1 == *s2)
		{
			return (wildcmp(s1 + 1, s2 + 1));
		}
		return (0);
}
