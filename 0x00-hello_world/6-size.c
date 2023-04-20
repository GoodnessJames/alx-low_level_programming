#include <stdio.h>

/**
* main - Print size of various types on the computer it is compiled and run on
* Return: Return 0
*/
int main(void)
{
	char char_size;
	int int_size;
	long int li_size;
	long long int lli_size;
	float float_size;

	printf("Size of a char: %d byte(s)", sizeof(char_size));
	printf("Size of an int: %d byte(s)", sizeof(int_size));
	printf("Size of a long int: %d byte(s)", sizeof(li_size));
	printf("Size of a long long int: %d byte(s)", sizeof(lli_size));
	printf("Size of a float: %d byte(s)", sizeof(float_size));
	return (0);
}
