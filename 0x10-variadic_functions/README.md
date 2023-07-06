# Project Title: 0x10. C - Variadic functions

This project is centered on variadic functions and the following are the concepts covered in this project:
- **stdarg.h:** This is a header file that provides facilities for working with variadic functions. It contains a set of macros and functions that help handle the argument list of a variadic function. The key macros and functions defined in stdarg.h are: va_list, va_start, va_arg, va_copy. and va_end.
- **Variadic Functions:** Variadic functions are functions that accept varying number of arguments. The number of arguments can be of any type. Variadic functions are declared using the ellipsis (...) as the last parameter in the function declaration. Here's the general syntax for declaring a variadic function: return_type function_name(type1 arg1, type2 arg2, ...);
- **Const Keyword:** This is a keyword used to declare a variable as a constant, thereby keeping its value fixed and not modified once it has been initialized. The general syntax for declaring a constant variable is: `const data_type variable_name = value;`

## Description of each function file of the project tasks

### Task 0 File: 0-sum_them_all.c
The function written in this file (0-sum_them_all.c) returns the sum of all its parameters.
- **Prototype:** int sum_them_all(const unsigned int n, ...);
- If n == 0, the return is 0

### Task 1 File: 1-print_numbers.c
The function written in this file prints numbers, followed by a new line.
- **Prototype:** void print_numbers(const char *separator, const unsigned int n, ...);
- where `separator` is the string to be printed between numbers
- and n is the number of integers passed to the function
- printf function is permitted to be used for this function
- If `separator` is NULL, nothing is printed
- A new line is printed at the end of the function

### Task 2 File: 2-print_strings.c
The function written in this file prints strings, followed by a new line.
- **Prototype**: void print_strings(const char *separator, const unsigned int n, ...);
- where `separator` is the string to be printed between the strings
- and n is the number of strings passed to the function
- printf function is permitted to be used for this function
- If `separator` is NULL, nothing is printed
- If one of the strings is NULL, (nil) is printed instead
- A new line is printed at the end of the function

### Task 3 File: 3-print_all.c
The function written in this file prints anything.
- **Prototype:** void print_all(const char * const format, ...);
- where `format` is a list of types of arguments passed to the function
	- c: char
	- i: integer
	- f: float
	- s: char * (if the string is NULL, (nil) is printed instead
	- any other char is ignored
- The use of for, goto, ternary operator, else, do ... while is forbidden
- Maximum of 2 while loops and 2 ifs are used
- A maximum of 9 variables is declared
- printf function is permitted to be used this function
- A new line is printed at the end of the function
