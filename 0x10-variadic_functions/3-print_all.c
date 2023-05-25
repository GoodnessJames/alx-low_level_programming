#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_char - Prints a character
 * @arg: A list of arguments pointing to the character be printed
 */
void print_char(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);

	printf("%c", letter);
}

/**
 * print_int - Prints an integer
 * @arg: A list of arguments pointing to the integer be printed
 */
void print_int(va_list arg)
{
	int n;

	n = va_arg(arg, int);

	printf("%d", n);
}

/**
 * print_float - Prints a float
 * @arg: A list of arguments pointing to the float be printed
 */
void print_float(va_list arg)
{
	float n;

	n = va_arg(arg, double);

	printf("%f", n);
}

/**
 * print_string - Prints a string
 * @arg: A list of arguments pointing to the string be printed
 */
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - Prints anything, followed by a new line
 * @format: A list of types of arguments passed to the function
 *
 * Return: Void
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *separator = "";

	va_list args;

	argPrinter func[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};
	va_start(args, format);

	while (format && (*(format + i)))
	{
		int j = 0;

		while (j < 4 && (*(format + i) != *(func[j].symbol)))
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			func[j].fPtr(args);
			separator = ", ";
		}
		i++;
	}
	va_end(args);

	printf("\n");
}
