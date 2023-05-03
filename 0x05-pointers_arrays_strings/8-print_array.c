#include <stdio.h>
/**
 * print_array - Prints n elements of an array of integers
 * @a: The pointer to an array
 * @n: The number of elements of the array to be printed
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);
	if (index == n - 1)
		continue;
	printf(", ");
	}
	printf("\n");
}

