#include <ctype.h>
#include "main.h"

/**
 * *cap_string - Capitalizes all words of a string
 * @str: Pointer to the string to capitalize
 *
 * Return: return str
 */
char *cap_string(char *str)
{
	int i;
	int capital_char = 1;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (capital_char && isalpha(str[i]))
		{
			str[i] = toupper(str[i]);
			capital_char = 0;
		}
		else if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == ',' || str[i] == ';' || str[i] == '.' ||
			str[i] == '!' || str[i] == '?' || str[i] == '"' ||
			str[i] == '(' || str[i] == ')' || str[i] == '{' ||
			str[i] == '}')
		{
			capital_char = 1;
		}
	}
	return (str);
}
