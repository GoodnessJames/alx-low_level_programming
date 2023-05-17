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
	int len = 0;

	int arg, chars, index;
	char *ptStr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
	{
		for (chars = 0; av[arg][chars] != '\0'; chars++)
			len++;
		len++;
	}
	len++;

	ptStr = (char *)malloc((len) * sizeof(char));

	if (ptStr == NULL)
		return (NULL);
	index = 0;
	for (arg = 0; arg < ac; arg++)
	{
		for (chars = 0; av[arg][chars] != '\0'; chars++)
			ptStr[index++] = av[arg][chars];

		ptStr[index++] = '\n';
	}
	ptStr[index] = '\0';

	return (ptStr);
	free(ptStr);
}
