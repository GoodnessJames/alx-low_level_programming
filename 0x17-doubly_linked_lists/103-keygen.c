#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Generates and prints passwords for the crackme5 executable
 * @ac: The number of arguments supplied to the program
 * @av: An array of pointers to the arguments
 *
 * Return: Always 0
 */
int main(int ac, char **av)
{
	char password[7], *chars;
	int tmp, i, len = strlen(av[1]);
	(void)ac;

	chars = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	tmp = (len ^ 59) & 63;
	password[0] = chars[tmp];

	tmp = 0;
	for (i = 0; i < len; i++)
		tmp += av[1][i];
	password[1] = chars[(tmp ^ 79) & 63];

	tmp = 1;
	for (i = 0; i < len; i++)
		tmp *= av[1][i];
	password[2] = chars[(tmp ^ 85) & 63];

	tmp = 0;
	for (i = 0; i < len; i++)
	{
		if (av[1][i] > tmp)
			tmp = av[1][i];
	}
	srand(tmp ^ 14);
	password[3] = chars[rand() & 63];

	tmp = 0;
	for (i = 0; i < len; i++)
		tmp += (av[1][i] * av[1][i]);
	password[4] = chars[(tmp ^ 239) & 63];

	for (i = 0; i < av[1][0]; i++)
		tmp = rand();
	password[5] = chars[(tmp ^ 229) & 63];
	password[6] = '\0';
	printf("%s", password);
	return (0);
}
