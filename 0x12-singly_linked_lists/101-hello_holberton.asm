; File: 101-hello_holberton.asm
; Desc: This file contains a 64-bit assembly program that prints: Hello, Holberton followed by a newline.

; Declare the required function for the program
extern printf

; Initialize variables in the Data Section
section .data
	msg: db "Hello, Holberton", 0
	fmt: db "%s", 10, 0

; Define executable instructions of the program in the Text Section (where main is the standard gcc entry point)
section .text
	global main

main:
; Align the stack
	push rbp
; Set up the arguments for printf function call
	mov rdi,fmt
	mov rsi,msg
	mov rax,0
	call printf

; Restore the stack
	pop rbp

; Return: return zero errors
	mov rax,0
	ret
