#include "main.h"

/**
 * prime_finder - Checks for prime numbers
 * @n: Input integer to check
 * @i: Update variable
 *
 * Return: Returns (1), (0), or (prime_finder(n, i + 1))
 */
int prime_finder(int n, int i)
{
	if (n <= 1)
		return (0);
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (prime_finder(n, i + 1));
}

/**
 * is_prime_number - Returns a prime number if the input integer is a prime
 * @n: Input integer to check
 *
 * Return: Returns (prime_finder(n, 2))
 */
int is_prime_number(int n)
{
	return (prime_finder(n, 2));
}
