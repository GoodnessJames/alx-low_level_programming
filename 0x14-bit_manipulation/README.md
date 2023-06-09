# Project Title: Bit Manipulation in C (0x14-bit_manipulation)

## Introduction

Bit manipulation in C involves performing operations on individual bits of a binary number using bitwise operators (&, |, ^, <<, >>). These operators allows manipulation and extraction of specific bits and perform logical operations on the individual bits.

**Common Bitwise Operators Used in C**

1. Bitwise AND (&): Performs a logical AND operation between two bits. It returns 1 if both bits are 1; otherwise, it returns 0.
2. Bitwise OR (|): Performs a logical OR operation between two bits. It returns 1 if either of the bits is 1; otherwise, it returns 0.
3. Bitwise XOR (^): Performs an exclusive OR operation between two bits. It returns 1 if exactly one of the bits is 1; otherwise, it returns 0.
4. Bitwise NOT (~): Flips the bits, i.e., changes 0s to 1s and 1s to 0s.
5. Left shift (<<): Shifts the bits to the left by a specified number of positions. It effectively multiplies the number by 2 for each shift.
6. Right shift (>>): Shifts the bits to the right by a specified number of positions. It effectively divides the number by 2 for each shift.

**Relevance of Bit Manipulation**

- Performing efficient mathematical operations, such as multiplication or division by powers of 2.
- Manipulating flags or individual options in a bit field.
- Setting or clearing specific bits in a number.
- Extracting specific bits from a number.

## Objective of the Project Report

The objective of this project report is to demonstrate how bit manipulation is implemented in providing efficient solutions to certain problems in low-level programming.

## Content of the Project Directory

The content of this project directory includes:
- [exe](https://github.com/GoodnessJames/alx-low_level_programming/tree/master/0x14-bit_manipulation/exe): This folder contains all executable files created from the function files compiled.
- [test](https://github.com/GoodnessJames/alx-low_level_programming/tree/master/0x14-bit_manipulation/test): This folder contains all the test files provided by ALX School. The files in this directory helps to verify if the functions written work as expected.
- [_putchar.c](https://github.com/GoodnessJames/alx-low_level_programming/blob/master/0x14-bit_manipulation/_putchar.c): This file contains a custom putchar function that is implemented in writing a character to the stdout. This file is very relevant for this project because it is stated in one of the project requirements that using any other standard library function is forbidden. For this project, this function is used instead of printf.
- [main.h](https://github.com/GoodnessJames/alx-low_level_programming/blob/master/0x14-bit_manipulation/main.h): Header file that contains all the function prototypes written in the project.

**Other than these files, the following are files created for each C function written for the tasks in this project to demonstrate the utilization of bit manipulation in problem solving:**

- **Task 0 File:** [0-binary_to_uint.c](https://github.com/GoodnessJames/alx-low_level_programming/blob/master/0x14-bit_manipulation/0-binary_to_uint.c)
	- Prototype: unsigned int binary_to_uint(const char *b);
	- Description: C function that converts a binary number to an unsigned int.
	- The parameter b is a pointer to a string of 0 and 1 characters.
	- Return: On SUCCESS, returns (n) i.e. the converted number
		  
		  On FAILURE, returns (0) if b is NULL or contains chars not 0 or 1
- **Task 1 File:** [1-print_binary.c](https://github.com/GoodnessJames/alx-low_level_programming/blob/master/0x14-bit_manipulation/1-print_binary.c)

