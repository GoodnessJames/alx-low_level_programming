# Project Title: 0x0A-argc_argv

## Description of each C-function File in the Tasks

### Task 0 File: 0-whatsmyname.c 
In this file, a program is written that prints its name, followed by a new line.
- If the program is renamed, it will print the new name, without having to compile it again
- The path before the name of the program is not removed

### Task 1 File: 1-args.c
In this file, a program is written that prints the number of arguments passed into it.
- The program prints a number, followed by a new line

### Task 2 File: 2-args.c
In this file, a program is written that prints all arguments it receives.
- All arguments are printed, including the first one
- The program only prints one argument per line, ending with a new line

### Task 3 File: 3-mul.c
In this file, a program is written that multiplies two numbers.
- The program prints the result of the multiplication, followed by a new line
- The two numbers and the result of the multiplication are stored in an integer
- If the program does not receive two arguments, the program prints **Error**, followed by a new line, and returns 1

### Task 4 File: 4-add.c
In this file, a program is written that adds positive numbers.
- The result of the addition of two positive numbers is printed, followed by a new line
- If no number is passed to the program, 0 is printed, followed by a new line
- If one of the numbers contains symbols that are not digits, **Error** is printed, followed by a new line, and returns 1
- The numbers and the addition of all the numbers are stored in an int variable

## Task 5 File: 100-change.c
 In this file, a program is written that prints the minimum number of coins to make a change for an amount of money.
-  Usage: ./change cents
-  Where cents is the number of cents needed to give back
-  if the number of arguments passed to the program is not exactly 1, **Error** is printed, followed by a new line, and the program returns 1
- **atoi** function is used to parse the parameter passed to the program
-  If the number passed as the argument is negative, 0 is printed, followed by a new line
- An unlimited number of coins of values 25, 10, 5, 2, and 1 cent is used
