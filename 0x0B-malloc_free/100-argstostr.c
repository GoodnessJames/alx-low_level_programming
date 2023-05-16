#include <stdlib.h>

/**
 * *argstostr - Concatenates all the arguments of your program
 * @ac: Argument count
 * @av: Pointer to an array of argument vectors/strings
 *
 * Return: returns (ptStr) on success or (NULL) on failure
 */
char *argstostr(int ac, char **av)
{
	char *ptStr;
	int index, i, j;

	int size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			size++;
		size++;
	}
	size++;

	ptStr = malloc(size * sizeof(char *));

	if (ptStr == NULL)
		return (NULL);

	index = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			ptStr[index++] = av[i][j];

		ptStr[index++] = '\n';
	}
	ptStr[index] = '\0';

	return (ptStr);
}
