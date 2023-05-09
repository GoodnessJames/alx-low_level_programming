#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of two diagonals of a square matrix of int
 * @a: Pointer to an array of matrix
 * @size: Size of the array
 *
 * Return: Return (dest)
 */
void print_diagsums(int *a, int size)
{
	int index;

	int sum1 = 0, sum2 = 0;

	for (index = 0; index < size; index++)
	{
		sum1 += *(a + index * size + index);
		sum2 += *(a + index * size + (size - index - 1));
	}
	printf("%d, %d\n", sum1, sum2);
}
