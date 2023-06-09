# Project Title: Bit Manipulation in C (0x14-bit_manipulation)

## Introduction

Bit manipulation in C involves performing operations on individual bits of a binary number using bitwise operators `(&, |, ^, ~, <<, >>)`. These operators allow manipulation and extraction of specific bits and perform logical operations on the individual bits.

**Common Bitwise Operators Used in C**

1. Bitwise AND `(&)`: Performs a logical AND operation between two bits. It returns 1 if both bits are 1; otherwise, it returns 0.
2. Bitwise OR `(|)`: Performs a logical OR operation between two bits. It returns 1 if either of the bits is 1; otherwise, it returns 0.
3. Bitwise XOR `(^)`: Performs an exclusive OR operation between two bits. It returns 1 if exactly one of the bits is 1; otherwise, it returns 0.
4. Bitwise NOT `(~)`: Flips the bits, i.e., changes 0s to 1s and 1s to 0s.
5. Left shift `(<<)`: Shifts the bits to the left by a specified number of positions. It effectively multiplies the number by 2 for each shift.
6. Right shift `(>>)`: Shifts the bits to the right by a specified number of positions. It effectively divides the number by 2 for each shift.

**Relevance of Bit Manipulation**
- Performing efficient mathematical operations, such as multiplication or division by powers of 2.
- Manipulating flags or individual options in a bit field.
- Setting or clearing specific bits in a number.
- Extracting specific bits from a number.

## Objective of the Project Report
The objective of this project report is to demonstrate how bit manipulation is implemented in providing efficient solutions to certain problems in low-level programming.

## Content of the Project Directory
The content of this project directory includes:
- [exe](https://github.com/GoodnessJames/alx-low_level_programming/tree/master/0x14-bit_manipulation/exe): This folder contains all the executable files created from the compiled function files.
- [test](https://github.com/GoodnessJames/alx-low_level_programming/tree/master/0x14-bit_manipulation/test): This folder contains all the test files provided by ALX School. The files in this directory help to verify if the functions written work as expected.
- [_putchar.c](https://github.com/GoodnessJames/alx-low_level_programming/blob/master/0x14-bit_manipulation/_putchar.c): This file contains a custom putchar function that is implemented in writing a character to the stdout. This file is very relevant for this project because it is stated in one of the project requirements that using any other standard library function is forbidden. For this project, this function is used instead of printf.
- [main.h](https://github.com/GoodnessJames/alx-low_level_programming/blob/master/0x14-bit_manipulation/main.h): Header file that contains all the function prototypes written in the project.

**Other than these files, the following are files created for each C function written for the tasks in this project to demonstrate the utilization of bit manipulation in problem-solving:**

- **Task 0 File:** [0-binary_to_uint.c](https://github.com/GoodnessJames/alx-low_level_programming/blob/master/0x14-bit_manipulation/0-binary_to_uint.c)
	- **Prototype:** unsigned int binary_to_uint(const char *b);
	- **Description:** C function that converts a binary number to an unsigned int.
	- The **parameter** b is a pointer to a string of 0 and 1 characters.
	- Return: On SUCCESS, returns the converted number. On FAILURE, returns (0) if b is NULL or contains chars not 0 or 1
- **Task 1 File:** [1-print_binary.c](https://github.com/GoodnessJames/alx-low_level_programming/blob/master/0x14-bit_manipulation/1-print_binary.c)
	- **Prototype:** void print_binary(unsigned long int n);
	- **Description:** C function that prints the binary representation of a number.
	- The **parameter** n is the number to be printed
	- **Return:** Void
- **Task 2 File:** [2-get_bit.c](https://github.com/GoodnessJames/alx-low_level_programming/blob/master/0x14-bit_manipulation/2-get_bit.c)
	- **Prototype:** int get_bit(unsigned long int n, unsigned int index);
	- **Description:** C function that returns the value of a bit at a given index.
	- **Parameters:** n is the bit, index is the index to get the value at (index starts at 0)
	- **Return:** On SUCCESS, returns the value of bit at index - index. On FAILURE, returns (-1) to indicate an error occurred
- **Task 3 File:** [3-set_bit.c](https://github.com/GoodnessJames/alx-low_level_programming/blob/master/0x14-bit_manipulation/3-set_bit.c)
	- **Prototype:** int set_bit(unsigned long int *n, unsigned int index);
	- **Description:** C function that sets the value of a bit at a given index to 1.
	- **Parameters:** n is a pointer to an unsigned long int, index is the index to get the value at (index starts at 0)
	- **Return:** On SUCCESS, returns (1). On FAILURE, returns (-1) to indicate an error occurred
- **Task 4 File:** [4-clear_bit.c](https://github.com/GoodnessJames/alx-low_level_programming/blob/master/0x14-bit_manipulation/4-clear_bit.c)
	- **Prototype:** int clear_bit(unsigned long int *n, unsigned int index);
	- **Description:** C function that sets the value of a bit at a given index to 0.
	- **Parameters:** n is a pointer to an unsigned long int, index is the index to get the value at (index starts at 0)
	- **Return**: On SUCCESS, returns (1). On FAILURE, returns (-1) to indicate an error occurred
- **Task 5 File:** [5-flip_bits.c](https://github.com/GoodnessJames/alx-low_level_programming/blob/master/0x14-bit_manipulation/5-flip_bits.c)
	- **Prototype:** unsigned int flip_bits(unsigned long int n, unsigned long int m);
	- **Description:** C function that returns the number of bits needed to be flipped to get from one number to another.
	- **Parameters:** n is the number to flip, m is the number to flip n to
	- **Return:** Returns the number of bits flipped from n to m
- **Task 6 File:** [100-get_endianness.c](https://github.com/GoodnessJames/alx-low_level_programming/blob/master/0x14-bit_manipulation/100-get_endianness.c)
	-  **Prototype:** int get_endianness(void);
	-  **Description:** C function that checks the endianness.
	-  **Parameters:** No parameters (void)
	-  **Return:** Returns (0) if big-endian, Returns (-1) if little-endian
