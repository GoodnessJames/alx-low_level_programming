#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: Pointer to a string to search
 * @accept: Pointer to a prefix substring
 *
 * Return: Returns the number of bytes which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int check1, check2;

	for (check1 = 0; s[check1]; check1++)
	{
		for (check2 = 0; accept[check2]; check2++)
		{
			if (s[check1] == accept[check2])
				break;
		}
		if (!accept[check2])
			return (check1);
	}
	return (check1);
}
