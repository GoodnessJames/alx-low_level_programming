# Project: 0x02-functions_nested_loops

## Introduction 
Functions in C are self-contained blocks of code that execute a specific task when they are called or invoked. They play a crucial role in organizing and structuring programs, leading to improved readability, maintainability, and efficiency. 

The structure of a function in C comprises a function **signature** (aka prototype), which encompasses the **return** type, function **name**, and **parameters**. Within the function body, the actual code resides, and it is executed whenever the function is called.

**Here’s an illustration:**

```
Function signature/prototype: return_type function_name(parameters);

Here’s a breakdown of a function declaration syntax: int print_alphabet(void);

Function name: print_alphabet

Description: Prints alphabets in lowercase

Return type: Returns an integer

Parameters: No parameters parsed (void)
```
A nested loop in C refers to the use of one loop inside another loop. It involves placing a loop structure (like a **for** loop, **while** loop, or **do-while** loop) within the body of another loop. This allows for multiple iterations of the inner loop for each iteration of the outer loop. Nested loops are particularly useful when working with multidimensional data structures, such as matrices or two-dimensional arrays. They enable you to iterate through each element or combination of elements in a structured and organized manner. 

The basic structure of a nested loop in C looks like this: 

```
for (outer_loop_initialization; outer_loop_condition; outer_loop_update) 
{ /* Outer loop code */
  for (inner_loop_initialization; inner_loop_condition; inner_loop_update)
    { /* Inner loop code */
    }
}
```
## Description of each Program in the Tasks:

### C-Program of Task 0

- Prints _putchar, followed by a new line (The program returns 0)

### C-Program of Task 1

Prints the alphabet, in lowercase, followed by a new line
- Prototype: void print_alphabet(void);
-  _putchar is used ONLY twice in the code

### C-Program of Task 2

Prints 10 times the alphabet, in lowercase, followed by a new line
- Prototype: void print_alphabet_x10(void);
-  _putchar is used ONLY twice in the code

### C-Program of Task 3

Checks for a lowercase character
- Prototype: int _islower(int c);
- Returns 1 if c is lowercase
- Returns 0 otherwise

### C-Program of Task 4

Checks for alphabetic character
- Prototype: int _isalpha(int c);
- Returns 1 if c is a letter, lowercase or uppercase
- Returns 0 otherwise

### C-Program of Task 5

Prints the sign of a number.
- Prototype: int print_sign(int n);
- Returns 1 and prints + if n is greater than zero
- Returns 0 and prints 0 if n is zero
- Returns -1 and prints - if n is less than zero

### C-Program of Task 6

Computes the absolute value of an integer
- Prototype: int _abs(int);

### C-Program of Task 7

Prints the last digit of a number
- Prototype: int print_last_digit(int);
- Returns the value of the last digit

### C-Program of Task 8

Prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59
- Prototype: void jack_bauer(void);

### C-Program of Task 9

Prints the 9 times table, starting with 0
- Prototype: void times_table(void);

### C-Program of Task 10

Adds two integers and returns the result
- Prototype: int add(int, int);

### C-Program of Task 11

Prints all natural numbers from n to 98, followed by a new line
- Prototype: void print_to_98(int n);
- Numbers are separated by a comma, followed by a space
- Numbers are printed in order
- The first printed number is the number passed to your function
- The last printed number is 98
- The standard library is not used

## Conclusion
I acquired hands-on experience in working with loops and by understanding and effectively utilizing nested loops, I can efficiently process structured data and solve problems that involve multiple levels of iteration in C programs.
