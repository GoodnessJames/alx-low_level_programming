#include <stdio.h>

/**
* main - Print alphabets in lowercase using the putchar function
* Return: 0
*/
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}
