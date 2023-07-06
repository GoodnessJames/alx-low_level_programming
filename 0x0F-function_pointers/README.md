# Project Title: 0x0F. C - Function pointers

This project is centered on function pointers in C, their relevance, and their application to C programs.

## Description of the files created for each task in the project

### Task 0 File: 0-print_name.c
The function written in this file (0-print_name.c) prints a name
- Prototype: void print_name(char *name, void (*f)(char *));

### Task 1 File: 1-array_iterator.c
The function written in this file (1-array_iterator.c) executes a function given as a parameter on each element of an array.
- Prototype: void array_iterator(int *array, size_t size, void (*action)(int));
- where size is the size of the array
- and action is a pointer to the function to use

### Task 2 File: 2-int_index.c
The function written in this file (2-int_index.c) searches for an integer.
- Prototype: int int_index(int *array, int size, int (*cmp)(int));
- where size is the number of elements in the array named array
- cmp is a pointer to the function used to compare values
- int_index returns the index of the first element for which the cmp function does not return 0
- If no element matches, the return is -1
- If size <= 0, the return is -1

### Task 3 Files: 3-main.c, 3-op_functions.c, 3-get_op_func.c, 3-calc.h
In this task, a program is created that performs simple operations.
- The standard library is used
- Usage: calc num1 operator num2
- num1 and num2 are assumed to be integers, so the atoi function is used to convert them from the string input to int
- the operator is one of the following:
	+: addition
	-: subtraction
	*: multiplication
	/: division
	%: modulo
- The program prints the result of the operation, followed by a new line
- It is assumed that the result of all operations can be stored in an int
- if the number of arguments is wrong, Error is printed, followed by a new line, with an exit status of 98
- if the operator is none of the above, Error is printed, followed by a new line, with an exit status of 99
- if the user tries to divide (/ or %) by 0, Error is printed, followed by a new line, with an exit status of 100

### Description of the four files required for task 3
- **3-calc.h:** This file contains all the function prototypes and data structures used by the program. 
- **3-op_functions.c:** This function contains not more than the 5 following functions:

	op_add: returns the sum of a and b. Prototype: int op_add(int a, int b);
	
	op_sub: returns the difference of a and b. Prototype: int op_sub(int a, int b);
	
	op_mul: returns the product of a and b. Prototype: int op_mul(int a, int b);
	
	op_div: returns the result of the division of a by b. Prototype: int op_div(int a, int b);
	
	op_mod: returns the remainder of the division of a by b. Prototype: int op_mod(int a, int b);

- **3-get_op_func.c:** This file contains the function that selects the correct function to perform the operation asked by the user.

**File Requirements:**

	- **Prototype:** int (*get_op_func(char *s))(int, int);
 
	- where s is the operator passed as an argument to the program
 
	- This function returns a pointer to the function that corresponds to the operator given as a parameter.
 
	- Switch statements are not used for this function code
 
	- For or do ... while loops are not used
 
	- goto statement is not used
 
	- else condition is not used
 
	- More than one if statement is not used in this code
 
	- More than one while loop is not used in the code
 
	- If `s` does not match any of the 5 expected operators (+, -, *, /, %), NULL is returned
 
	- Only two variables are declared in this function.

- **3-main.c:** This file contains the main function only

**File Requirements:**

	- Any other function than main is not coded in this file
 
	- op_add, op_sub, op_mul, op_div or op_mod is not directly called from the main function
 
	- atoi function is used to convert arguments to int
 
	- Any kind of loop is not used for this function code
 
	- Maximum of 3 if statements are used for the code

### Task 4 File: 100-main_opcodes.c
The program written in this file (100-main_opcodes.c) prints the opcodes of its own main function.
- **Usage:** ./main number_of_bytes
- the opcodes is printed in hexadecimal, lowercase
- each opcode is two char long
- listing ends with a new line
- printf and atoi function is used in this program
- atoi is used to convert the argument to an int
- If the number of argument is not the correct one, Error is printed, followed by a new line, with an exit status of 1
- If the number of bytes is negative, Error is printed, followed by a new line, with an exit status of 2
- Compiling with any flags is optional
- Translating the opcodes to assembly instructions, udcli can be implemented.
