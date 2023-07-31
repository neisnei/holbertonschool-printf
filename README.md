# holbertonschool-printf
Custom _printf Function

This is a custom implementation of the printf-like function in C, called _printf, which allows you to print formatted output to the standard output.
Table of Contents

    Introduction
    Features
    Usage
    Conversion Specifiers
    Limitations

Introduction

The _printf function provides similar functionality to the standard library printf function but with a reduced set of supported conversion specifiers. It currently supports the following conversion specifiers:

    %c: Print a single character.
    %s: Print a null-terminated string.
    %%: Print a literal percent sign.

Features

    Supports basic printing of characters and strings with %c and %s conversion specifiers.
    Handles the %% specifier to print a literal percent sign.
    The _putchar_c function is provided to print individual characters, and _putchar is used internally for characters inside conversion specifiers.

Usage

To use the _printf function in your C program, follow these steps:

    Include the necessary headers in your C file:

#include <stdio.h> #include <stdarg.h> #include "main.h"

Author
Neischaly Ruidiaz
Natzu 
