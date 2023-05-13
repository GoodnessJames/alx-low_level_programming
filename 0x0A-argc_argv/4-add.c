#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers
 * @argc: The integer variable that counts the number of arguments
 * @argv: The pointer to an array of strings
 *
 * Return: return (1) or (0)
 */
int main(int argc, char *argv[])
{
	int i, digit;

	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (digit = 0; argv[i][digit]; digit++)
		{
			if (argv[i][digit] < '0' || argv[i][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);


	return (0);
}
