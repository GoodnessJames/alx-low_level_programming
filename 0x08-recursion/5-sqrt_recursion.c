#include "main.h"

int sqrt_finder(int num, int root);
int _sqrt_recursion(int n);

/**
 * sqrt_finder - Finds the square root of a num given the num and root
 * @num: The number to compare to the root
 * @root: The root to be checked
 *
 * Return: Returns (root), (-1) or (sqrt_finder(num, root + 1))
 */
int sqrt_finder(int num, int root)
{
	if ((root * root) == num)
		return (root);
	if (root == num / 2)
		return (-1);
	return (sqrt_finder(num, root + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The postive integer number
 *
 * Return: Return (-1), (1) or (x * _pow_recursion(x, y-1))
 */
int _sqrt_recursion(int n)
{
	int root  = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (sqrt_finder(n, root));
}

