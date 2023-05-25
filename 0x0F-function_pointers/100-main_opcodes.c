#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the operation code of it's own function
 * @ac: Argument count
 * @av: An array pointer to the arguments passed
 *
 * Return: returns (0)
 */
int main(int ac, char *av[])
{
	int bytes, i;
	unsigned char opcode;

	int (*fPtr)(int, char **) = main;

	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(av[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < bytes; i++)
	{
		opcode = *(unsigned char *)fPtr;

		printf("%.2x", opcode);
		if (i == bytes - 1)
			continue;
		printf(" ");
		fPtr += 1;
	}
	printf("\n");
	return (0);
}
