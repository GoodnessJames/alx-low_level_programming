#include "main.h"

/**
 * _puts -  Prints a string, followed by a new line, to stdout
 * @s: The pointer to a string
 *
 * Return: void
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s++);
	}
	_putchar('\n');
}

