#include <stdio.h>

/**
 * main - Finds and prints the sum of the even-valued terms
 *
 *Return: 0
 */
int main(void)
{
	unsigned long int n, n1 = 0, n2 = 1, sum = 0;

	for (n = 0; n < 4000000; n++)
	{
		if (n % 2 != 0)
			continue;

		sum = n1 + n2;

		printf("%lu", sum);

		n1 = n2;
		n2 = sum;

		if (n == 3800000)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
