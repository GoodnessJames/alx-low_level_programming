#include "main.h"

/**
 * print_triangle - Prints a triangle on the terminal using the # character
 * @size: The number of times the character # should be printed
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (k = size - i; k >= 1; k--)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)
				_putchar('#');
			_putchar('\n');

		}
	}
}
