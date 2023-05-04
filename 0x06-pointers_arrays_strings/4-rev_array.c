#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: The pointer to an array of integers
 * @n: Number of elements of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
