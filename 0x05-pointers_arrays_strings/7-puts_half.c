#include "main.h"
#include <string.h>

/**
 * puts_half - Prints half of a string, followed by a new line
 * @str: The pointer to a string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = strlen(str);

	int index;

	if (len % 2 == 0)
		index = len / 2;
	else
		index = (len - 1) / 2;
	while (index < len)
	{
		_putchar (str[index]);
		index++;
	}
	_putchar('\n');
}

