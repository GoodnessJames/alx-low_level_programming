#include "main.h"
#include <string.h>

int check_palindrome(char *s, int start_index, int end_index);
int is_palindrome(char *s);

/**
 * check_palindrome - Checks if a string is a palindrome
 * @s: Pointer to a string to check
 * @start_index: The first index of the string
 * @end_index: The last index of the string
 *
 * Return: (1), (0) or (check_palindrome(s, start_index + 1, end_index - 1))
 */
int check_palindrome(char *s, int start_index, int end_index)
{
	if (start_index >= end_index)
		return (1);
	if (s[start_index] != s[end_index])
		return (0);
	return (check_palindrome(s, start_index + 1, end_index - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: Pointer to a string to check
 *
 * Return: Returns (check_palindrome(s, start_index, end_index))
 */
int is_palindrome(char *s)
{
	int start_index =  0;
	int end_index = strlen(s) - 1;

	return (check_palindrome(s, start_index, end_index));
}
