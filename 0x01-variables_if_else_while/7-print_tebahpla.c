#include <stdio.h>

/**
* main - Prints lowercase alphabets in reverse using the putchar function
* Return: 0
*/
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');

	return (0);
}
