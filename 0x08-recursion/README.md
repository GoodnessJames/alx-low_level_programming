# Project Title: 0x08. C - Recursion
Recursion in C is a programming technique where a function calls itself within its own body. It allows for solving complex problems by breaking them down into smaller, simpler instances. The recursive function typically has a **base case** that specifies when the recursion should **terminate**, and a **recursive case** that **defines** how the function calls itself with smaller inputs. Each recursive call creates a new instance of the function with its own set of variables, building a call stack. As the base case is reached, the function calls begin to unwind, with each call returning a value to the previous call until the original call completes. Recursion is a powerful tool for solving problems that exhibit a recursive structure or when an iterative solution may be cumbersome or less efficient.

## Description of each C-function File in the Tasks
The functions implemented in each file for the project tasks **exclusively** utilize the **recursive** approach to problem-solving in the C programming language. Here are the functions written for each project task:

### Task 0: 0-puts_recursion.c

The function in this file [0-puts_recursion.c](https://github.com/GoodnessJames/alx-low_level_programming/blob/master/0x08-recursion/0-puts_recursion.c) prints a string, followed by a new line using only the recursive method.
- Prototype: void _puts_recursion(char *s);

### Task 1: 1-print_rev_recursion.c

The function in this file prints a string in reverse.
- Prototype: void _print_rev_recursion(char *s);

### Task 2: 2-strlen_recursion.c

The function in this file returns the length of a string.
- Prototype: int _strlen_recursion(char *s);

### Task 3: 3-factorial.c

The function in this file returns the factorial of a given number.
- Prototype: int factorial(int n);
- If n is lower than 0, the function returns -1 to indicate an error
- Factorial of 0 is 1

### Task 4: 4-pow_recursion.c
The function in this file returns the value of x raised to the power of y.
- Prototype: int _pow_recursion(int x, int y);
- If y is lower than 0, the function returns -1

### Task 5: 5-sqrt_recursion.c
The function in this file returns the natural square root of a number.
- Prototype: int _sqrt_recursion(int n);
- If the number does not have a natural square root, the function returns -1.

### Task 6: 6-is_prime_number.c
The function in this file checks in an integer is a prime number.
- Prototype: int is_prime_number(int n);
- If the integer is prime, the function returns 1.
- Otherwise, the function returns 0.

### Task 7: 7-is_palindrome.c
The function in this file checks if a string is a palindrome (ie an empty string)
- Prototype: int is_palindrome(char *s);
- If the string is a palindrome, the function returns 1.
- Otherwise, the function returns 0.

### Task 8: 100-wildcmp.c
The function in this file compares two strings s1 and s2.
- Prototype: int wildcmp(char *s1, char *s2);
- s2 can contain the special character *.
- If the strings can be considered identical, the function returns 1.
- Otherwise, the function returns 0.

## Conclusion
While recursion offers an elegant solution in certain scenarios, it may not always be the most efficient approach. It is crucial to exercise caution when utilizing recursion to prevent potential pitfalls, such as infinite recursion. This occurs when the base case is not adequately defined or reached, resulting in program crashes or excessive memory usage. 

This project enhanced my understanding of the importance of meticulously designing recursive functions, ensuring they have well-defined termination conditions and appropriately handle edge cases to avoid infinite recursion and excessive memory usage.
