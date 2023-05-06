#include <stdlib.h>
#include <string.h>

/**
 * *leet -  Encodes a string into 1337
 * @str: Pointer to the string to encode
 *
 * Return: result
 */
char *leet(char *str)
{
	char *result = malloc(strlen(str) + 1);
	int input, output;
	char letter;

	for (input = 0, output = 0; str[input] != '\0'; input++, output++)
	{
		letter = str[input];
		if (letter == 'a' || letter == 'A')
			result[output] = '4';
		else if (letter == 'e' || letter == 'E')
			result[output] = '3';
		else if (letter == 'o' || letter == 'O')
			result[output] = '0';
		else if (letter == 't' || letter == 'T')
			result[output] = '7';
		else if (letter == 'l' || letter == 'L')
			result[output] = '1';
		else
			result[output] = letter;
	}
	result[output] = '\0';

	return (result);
}
