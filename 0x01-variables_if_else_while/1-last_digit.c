#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Print the last digit of the number stored in the variable n
* Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	printf("Last digit of n is %d ", n);

	if (n > 5)
		printf("and is greater than 5\n");
	else if (n < 6)
		printf("and is less than 6 and not 0\n");
	else
		printf("and is 0\n");

	return (0);
}
