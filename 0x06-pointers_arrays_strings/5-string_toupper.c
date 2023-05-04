#include "main.h"
#include <ctype.h>

/**
 * *string_toupper - Changes all lowercase letters of a string to uppercase
 *
 * Return: 
 */
char *string_toupper(char *str)
{
	char *pt_str = str;
	while (*pt_str)
	{
		if (islower(*pt_str))
			*pt_str = toupper(*pt_str);
		
		++pt_str;
	}
	return (str);
}
