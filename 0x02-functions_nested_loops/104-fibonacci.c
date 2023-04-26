#include <stdio.h>

/**
 * main - Finds and prints the first 98 Fibonacci numbers, starting with 1 & 2
 *
 *Return: 0
 */
int main(void)
{
	unsigned long int n, n1 = 0, n2 = 1, sum = 0;

	for (n = 0; n < 98; n++)
	{
		sum = n1 + n2;

		printf("%lu, ", sum);

		n1 = n2;
		n2 = sum;
	}
	printf("\n");

	return (0);
}
