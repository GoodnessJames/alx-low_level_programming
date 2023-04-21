#include <stdio.h>

/**
* main - Print alphabets in lowercase, and then in uppercase using the putchar
* function
* Return: 0
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
