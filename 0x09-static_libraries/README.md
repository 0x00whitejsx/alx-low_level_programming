0x09. C - Static libraries
Description

This project focuses on understanding and implementing C static libraries. The main goal is to create a static library named libmy.a that contains various functions with specific functionalities. Additionally, a script named create_static_lib.sh is provided to create a static library called liball.a from all the .c files in the current directory.
Project Information

    By: Julien Barbier
    Weight: 1
    Start Date: Jan 12, 2024 6:00 AM
    End Date: Jan 18, 2024 6:00 AM
    Auto Review: Will be launched at the deadline
    Auto QA Review: 0.0/24 mandatory (Altogether: 0.0% - Mandatory: 0.0% - Optional: no optional tasks)

Concepts

    C static libraries
        What is a static library, how does it work, how to create one, and how to use it
        Basic usage of ar, ranlib, nm

Resources

    Read/Watch:
        What Is A “C” Library? What Is It Good For?
        Creating A Static “C” Library Using “ar” and “ranlib”
        Using A “C” Library In A Program
        [What is the difference between Dynamic and Static library (Static and Dynamic linking)](stop at 4:44)
    Man/Help:
        ar
        ranlib
        nm

Learning Objectives

By the end of this project, you should be able to explain to anyone, without the help of Google:
General

    What is a static library, how does it work, how to create one, and how to use it
    Basic usage of ar, ranlib, nm

Copyright - Plagiarism

    Solutions for the tasks should be developed independently.
    No content of this project should be published.
    Plagiarism is strictly forbidden and will result in removal from the program.

Requirements
C

    Allowed Editors: vi, vim, emacs
    All files compiled on Ubuntu 20.04 LTS using gcc with options: -Wall -Werror -Wextra -pedantic -std=gnu89
    All files should end with a new line
    README.md file at the root of the project is mandatory
    Code should use the Betty style and be checked using betty-style.pl and betty-doc.pl
    No global variables allowed
    No more than 5 functions per file
    No use of standard library functions (e.g., printf, puts, etc.)
    Allowed to use _putchar
    Don't push _putchar.c, it won't be taken into account
    Prototypes of all functions and the prototype of the function _putchar should be included in the header file called main.h
    Push the header file

Bash

    Allowed Editors: vi, vim, emacs
    All scripts tested on Ubuntu 20.04 LTS
    All files should end with a new line
    The first line of all files should be exactly #!/bin/bash
    README.md file at the root of the project describing each script
    All files must be executable

Tasks
0. A library is not a luxury but one of the necessities of life

    Create the static library libmy.a containing all the functions listed in the task.

bash

julien@ubuntu:~/0x09. Static Libraries$ ar -t libmy.a 
0-isupper.o
0-memset.o
0-strcat.o
1-isdigit.o
1-memcpy.o
1-strncat.o
100-atoi.o
2-strchr.o
2-strlen.o
2-strncpy.o
3-islower.o
3-puts.o
3-strcmp.o
3-strspn.o
4-isalpha.o
4-strpbrk.o
5-strstr.o
6-abs.o
9-strcpy.o
_putchar.o
julien@ubuntu:~/0x09. Static Libraries$ nm libmy.a 
# Output of nm command...

