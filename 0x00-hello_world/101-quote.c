/*#include <stdio.h>*/
#include <unistd.h>

/**
 * main - Print line of code using the 'unistd.h' header file and 'write'
 * function
 *
 * Return: 1
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	return (1);
}
