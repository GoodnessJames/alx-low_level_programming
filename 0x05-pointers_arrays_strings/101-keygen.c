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
	int index;
	srand(time(NULL));
	char password[PASSWORD_ELEMENTS + 1];

	char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+-=";
	
	password[PASSWORD_ELEMENTS] = '\0';
	
	for (index = 0; index < PASSWORD_ELEMENTS; index++)
		password[index] = characters[rand() % (sizeof(characters) - 1)];
	

	printf("The Random password generated is: %s\n", password);
	
	return (0);
}
