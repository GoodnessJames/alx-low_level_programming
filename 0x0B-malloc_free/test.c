#include <stdlib.h>

int str_len(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
	len++;
	str++;
	}
	return (len);
}

char *argstostr(int ac, char **av)
{
	char *tmp, *ptStr;

	if (ac == 0 || av == NULL)
		return (NULL);

	int total_len = 0;

	for (int i = 0; i < ac; i++)
		total_len += str_len(av[i]) + 1;

	ptStr = (char *)malloc(total_len + 1);

	if (ptStr == NULL)
		return (NULL);

	*tmp = ptStr;

	for (int i = 0; i < ac; i++)
	{
		while (*av[i] != '\0')
		{
			*tmp = *av[i];
			tmp++;
			av[i]++;
		}
		*tmp = '\n';
		*tmp++;
	}
	*tmp = '\0'
	return (ptStr);
}
