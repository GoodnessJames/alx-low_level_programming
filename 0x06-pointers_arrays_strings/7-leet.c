#include <string.h>

/**
 * *leet -  Encodes a string into 1337
 * @str: Pointer to the string to encode
 *
 * Return: result
 */
char *leet(char *str)
{
	char *result = str;
	char letter_set[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	char replace_set[] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};
	int input;

	for (input = 0; str[input] != '\0'; input++)
	{
		char current_letter = str[input];
		char *position = strchr(letter_set, current_letter);

		if (position != NULL)
		{
			int i = position - letter_set;

			result[input] = replace_set[i];
		}
	}
	return (result);
}
