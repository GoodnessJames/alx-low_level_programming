#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: The first pointer to an int
 * @b: The second pointer to an int
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
