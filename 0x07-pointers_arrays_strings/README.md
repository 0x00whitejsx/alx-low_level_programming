0x07. C - Even more pointers, arrays, and strings
==================================================

This repository contains solutions to tasks focused on pointers, arrays, and strings in C. The project emphasizes core concepts and practical applications in these areas.

Concepts
--------

For this project, we expect you to look at these concepts:

- Pointers and arrays
- Understanding multidimensional arrays
- Utilizing common C standard library functions for string manipulation

Resources
---------

Supplement your learning by referring to these resources:

- C - Pointer to Pointer
- C – Pointer to Pointer with example
- Multi-dimensional Arrays in C
- Two dimensional (2D) arrays in C programming with example

Learning Objectives
-------------------

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

General:
- What are pointers to pointers and how to use them
- What are multidimensional arrays and how to use them
- What are the most common C standard library functions to manipulate strings

Copyright - Plagiarism
----------------------

You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
You are not allowed to publish any content of this project.
Any form of plagiarism is strictly forbidden and will result in removal from the program.

Requirements
------------

General:

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
- You are allowed to use _putchar
- You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
- Don’t forget to push your header file

More Info
---------

You do not need to learn about pointers to functions, arrays of structures, malloc and free - yet.

Tasks
-----

This project contains several tasks, each focusing on different aspects of pointers, arrays, and strings. Below are some examples of tasks:

### 0. memset

Write a function that fills memory with a constant byte.

- Prototype: char *_memset(char *s, char b, unsigned int n);

### 1. memcpy

Write a function that copies memory area.

- Prototype: char *_memcpy(char *dest, char *src, unsigned int n);

### 2. strchr

Write a function that locates a character in a string.

- Prototype: char *_strchr(char *s, char c);

### 3. strspn

Write a function that gets the length of a prefix substring.

- Prototype: unsigned int _strspn(char *s, char *accept);

### 4. strpbrk

Write a function that searches a string for any of a set of bytes.

- Prototype: char *_strpbrk(char *s, char *accept);

### 5. strstr

Write a function that locates a substring.

- Prototype: char *_strstr(char *haystack, char *needle);

### 6. Chess is mental torture

Write a function that prints the chessboard.

- Prototype: void print_chessboard(char (*a)[8]);

### 7. The line of life is a ragged diagonal between duty and desire

Write a function that prints the sum of the two diagonals of a square matrix of integers.

- Prototype: void print_diagsums(int *a, int size);

