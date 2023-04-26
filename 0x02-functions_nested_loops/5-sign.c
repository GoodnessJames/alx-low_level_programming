#include "main.h"

/**
* print_sign - Prints the sign of a number
* @n: The character to check
*
* Return: Returns 1 if c is lowercase or Returns 0 otherwise
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('+');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
