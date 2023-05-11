#include "main.h"

/**
 * is_palindrome - Returns 1 if a string is a palindrome and 0 if not
 * @s: Pointer to a string
 *
 * Return: Returns ((n == 2) ? 1 : 0), (1), or (0).
 */
int is_palindrome(char *s)
{
	int string_start, string_end;

	if (string_start >= string_end)
		return (1);
	if (s[string_start] == s[string_end])
		return (is_palindrome(s, string_start + 1, string_end - 1));
}
