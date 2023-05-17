#include "main.h"
#include <stdlib.h>

int word_end(char *ptStr);
int word_count(char *ptStr);
char **strtow(char *str);

/**
 * word_end - Locates the end of a word in a string
 * @ptStr: Pointer to a string to be checked
 *
 * Return: returns (len)
 */
int word_end(char *ptStr)
{
	int i = 0, len = 0;

	while (*(ptStr + i) && *(ptStr + i) != ' ')
	{
		len++;
		i++;
	}
	return (len);
}

/**
 * word_count - Counts the number of words in a string
 * @ptStr: Pointer to a string to be counted
 *
 * Return: returns (words)
 */
int word_count(char *ptStr)
{
	int i = 0, words = 0, len = 0;

	for (i = 0; *(ptStr + i); i++)
		len++;
	for (i = 0; i < len; i++)
	{
		if (*(ptStr + i) != ' ')
		{
			words++;
			i += word_end(ptStr + i);
		}
	}
	return (words);
}

/**
 * strtow - Splits a string into words
 * @str: Pointer to the string to be split
 *
 * Return: returns (NULL) on FAILURE or (pt_str) on SUCCESS
 */
char **strtow(char *str)
{
	char **pt_str;
	int index = 0;
	int words, chars, w_index, c_index;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = word_count(str);
	if (words == 0)
		return (NULL);

	pt_str = malloc(sizeof(char *) * (words + 1));
	if (pt_str == NULL)
		return (NULL);

	for (w_index = 0; w_index < words; w_index++)
	{
		while (str[index] == ' ')
			index++;
		chars = word_end(str + index);

		pt_str[w_index] = malloc(sizeof(char) * (chars + 1));

		if (pt_str[w_index] == NULL)
		{
			while (w_index >= 0)
			{
				free(pt_str[w_index]);
				w_index--;
			}
			free(pt_str);
			return (NULL);
		}

		for (c_index = 0; c_index < chars; c_index++)
			pt_str[w_index][c_index] = str[index++];

		pt_str[w_index][c_index] = '\0';
	}
	pt_str[w_index] = NULL;

	return (pt_str);
}
