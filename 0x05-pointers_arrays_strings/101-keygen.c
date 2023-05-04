#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_ELEMENTS 8 
/**
 * main - Generates random valid passwords for the program 101-crackme
 *
 *Return: Returns 0
 */
int main(void)
{
	char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+-=";
	char password[PASSWORD_ELEMENTS + 1];
	srand(time(NULL));
	int index;

	for (index = 0; index < PASSWORD_ELEMENTS; index++)
		password[index] = characters[rand() % (sizeof(characters) - 1)];

	password[PASSWORD_ELEMENTS] = '\0';

	printf("The Random password generated is: %s\n", password);
	
	return (0);
}
