#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

/*
 * File: variadic_functions.h
 * Desc: A header file that contains all the function prototypes required
 *	 for the project (0x10-variadic_functions)
 */

#include <stdarg.h>

/**
 * struct printer - A struct type defining a printer
 * @symbol: A symbol representing a data type
 * @fPtr: A function pointer
 */
typedef struct printer
{
	char *symbol;
	void (*fPtr)(va_list arg);

} argPrinter;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
