#include "main.h"
#include <string.h>

/**
 * print_rev -  Prints a string in reverse, followed by a new line, to stdout
 * @s: The pointer to a string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len = strlen(s);
	int index = len - 1;

	while (index >= 0)
	{
		_putchar(s[index]);
		index--;
	}
	_putchar('\n');
}

