#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins to make change for an amount of
 *	  money
 * @argc: The integer variable that counts the number of arguments
 * @argv: The pointer to an array of strings
 *
 * Return: returns (1) or (0)
 */
int main(int argc, char *argv[])
{
	int i, cents;
	int change = 0;

	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && cents >= 0; i++)
	{
		while (cents >= coins[i])
		{
			change++;
			cents -= coins[i];
		}
	}
	printf("%d\n", change);

	return (0);
}
