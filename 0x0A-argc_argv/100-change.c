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
	int coins, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	coins = 0;

	coins += cents / 25;
	cents %= 25;
	coins += cents / 10;
	cents %= 10;
	coins += cents / 5;
	cents %= 5;
	coins += cents / 2;
	cents %= 2;
	coins += cents;

	printf("%d\n", coins);

	return (0);
}
