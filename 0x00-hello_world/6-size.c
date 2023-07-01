#include <stdio.h>

/**
* main - Print the size of various types on the computer it is compiled and run on
* Return: Return 0
*/
int main(void)
{
	char char_size;
	int int_size;
	long int li_size;
	long long int lli_size;
	float float_size;

	printf("Size of a char: %d byte(s)\n", sizeof(char_size));
	printf("Size of an int: %d byte(s)\n", sizeof(int_size));
	printf("Size of a long int: %d byte(s)\n", sizeof(li_size));
	printf("Size of a long long int: %d byte(s)\n", sizeof(lli_size));
	printf("Size of a float: %d byte(s)\n", sizeof(float_size));
	
	return (0);
}
