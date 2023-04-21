#include <stdio.h>

/**
* main - Print all the letters in lowercase except q and e using the putchar
* function
* Return: 0
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
