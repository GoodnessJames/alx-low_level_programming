#include "main.h"

/**
 * puts2 -  Prints every other character of a string starting with the first.
 * @str: The pointer to a string
 *
 * Return: void
 */
void puts2(char *str)
{
	int index = 0;

	for (index = 0; str[index] != '\0'; index += 2)
	{
		_putchar (str[index]);
	}
	_putchar('\n');
}

