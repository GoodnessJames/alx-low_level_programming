# Project Title: File I/O in C (0x14. C - File I/O)

## Introduction

Files are sequence of bytes in which data can be stored permanently in the hard disk. The RAM of the computer system cannot handle large amount of data and this is where files come in to save the day. File handling involves reading from and writing to files. With proper file handling, data can be stored and retrieved from external files at anytime. This project report presents an overview of file handling in the C programming language, including its concepts, functions, and implementation.

## Objective of the Project

The objective of this project is to understand and implement file handling operations in C, including file creation, reading data from files, writing data to files, appending and copying data to files to enhance understanding on the concepts of file handling and the practical applications.

**The project is based upon the following file operations:**

- **File Creation:** This is achieved by using the system call 'open()' defined in the library (#include<sys/stat.h>). This function takes a filename and mode as parameters. The modes include "O_RDONLY" (read only), "O_RWONLY" (write only), "O_RDRW" (read and write) and "O_APPEND" (append).
- **Writing Data to a File:** To write data to a file, the file descriptor will be passsed as an argument, followed by the buffer to write to and the size of bytes to write. Syntax: write(STDOUT_FILENO, buffer, 1024).
- **Closing a File:** Once the file operations are complete, it is essential to close the file using the close() system call. Closing the file ensures that all changes are saved and the resources are released.

## Implementation

The project is implemented in C programming language, utilizing the standard library functions provided by the language. The code is divided into functions for each file operation, promoting modularity and reusability.

## Content of the Project Directory

The content of this project directory includes:

- exe: This folder contains all the executable files created from the compiled function files.
- test: This folder contains all the test files provided by ALX School. The files in this directory helps to verify if the functions written work as expected.
- main.h: Header file that contains all the function prototypes written in the project.

**Other than these files, the following are files created for each C function written for the tasks in this project to illustrate file handling operations:**

- **Task 0 File:** 0-read_textfile.c
	- Prototype: ssize_t read_textfile(const char *filename, size_t letters);
	- Description: C function that reads a text file and prints it to the POSIX standard output.
	- Parameters: filename: name of the file, letters: is the number of letters the function should read and print
	- Return: On SUCCESS, returns the returns the actual number of bytes the function can read and print. On FAILURE, returns (0) to indicate file is empty or cannot be opened or read and the write call failed or did not write the expected number of bytes
- **Task 1 File:** 1-create_file.c
	- Prototype: int create_file(const char *filename, char *text_content);
	- Description: C function that creates a file.
	- Parameters: filename: name of the file to create, text_content: a null-terminated string to write to the file.
	- File permissions: rw-------
	- Return: On SUCCESS, returns (1). On FAILURE, returns (-1) to indicate that filename is NULL or the funciton failed
- **Task 2 File:** 2-append_text_to_file.c
	- Prototype: int append_text_to_file(const char *filename, char *text_content);
	- Description: C function that appends text at the end of a file.
	- Parameters: filename: name of the file, a null-terminated string to append to the file
	- Return: On SUCCESS, returns (1). On FAILURE, returns (-1) to indicate that filename is NULL, does not exists, funciton failed, or user lacks write permission.
- **Task 3 File:** 3-cp.c
	- Description: C program that copies the contents of a file to another file.
	- Usage: cp file_from file_to
	- 
- **Task 4 File:** 100-elf_header.c
	- Description: C program that displays the information contained in the ELF header at the start of an ELF file.
	- Usage elf_header elf_filename

## Result:

The results of the project include successful creation, reading, writing, appending and copying of data to files. The output can be observed by opening the generated file and examining its contents. Additionally, appropriate error handling techniques are implemented to handle file-related errors and exceptions.

## Conclusion:

File handling is a fundamental aspect of programming, and a thorough understanding of its principles is essential for various applications that involve storing data. This project offered a detailed examination of file handling in the C language, encompassing tasks such as creating, reading, writing, appending, and copying. By successfully completing this project, I acquired hands-on experience working with files and comprehension of file handling operations.
