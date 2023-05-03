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

	int str_len = 0;

	while (str[index])
		str_len++;

	for (index = 0; index < str_len; index += 2)
	{
		_putchar (str[index]);
	}
	_putchar('\n');
}

