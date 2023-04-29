#include <stdio.h>

/**
 * main - Finds and prints the largest prime factor of the number 612852475143
 *
 * Return: 0
 */
int main(void)
{
	long int num = 612852475143;
	long int largest_prime = 1;
	long int i;

	for (i = 2; i <= num; i++)
	{
		if (num % i == 0)
		{
			largest_prime = i;
			num = num / i;
		}
	}
	printf("%ld\n", largest_prime);

	return (0);
}
