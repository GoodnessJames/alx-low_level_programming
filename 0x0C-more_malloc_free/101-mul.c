#include <stdlib.h>
#include <stdio.h>
#include "main.h"

int digits(char c);
int check_input(char *str);
int multiply_input(char *n1, char *n2);

/**
 * digits - Checks for digits
 * @c: The character to compare to the ASCII value.
 *
 * Return: returns (c)
 */
int digits(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * check_input - Validates the input from the CMD line
 * @str: The string to check
 *
 * Return: returns (0) or (1)
 */
int check_input(char *str)
{
	while (*str)
	{
		if (!digits(*str))
			return (0);
		str++;
	}
	return (1);
}

/**
 * multiply_input - Multiplies the input/arguments entered on the CMD line
 * @n1: The first entered argument on the CMD line
 * @n2: The second entered argument on the CMD line
 *
 * Return: returns (mult)
 */
int multiply_input(char *n1, char *n2)
{
	int mult = atoi(n1) * atoi(n2);

	return (mult);
}

/**
 * main - Calls the functions that validates and multiplies two entered
 *	  arguments from the CMD line
 * @ac: The argument count
 * @av: The argument vector
 *
 * Return: returns (98) on FAILURE or (0) on SUCCESS
 */
int main(int ac, char *av[])
{
	int mult;

	if (ac != 3)
	{
		printf("Error\n");
		return (98);
	}
	if (!check_input(av[1]) || !check_input(av[2]))
	{
		printf("Error\n");
		return (98);
	}
	mult = multiply_input(av[1], av[2]);
	printf("%d\n", mult);
	return (0);
}
