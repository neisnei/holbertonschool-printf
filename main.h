#ifndef MAIN_H_
#define MAIN_H_

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>


/**
 * struct func_type - type structure
 * @t: pointer to the argument
 * @f: pointer of the function associated with the argument
 */

typedef struct func_type
{
char *t;
int (*f)(va_list);
}
func_t;

int _printf(const char *format, ...);
int _printchar(va_list values);
int _printString(va_list values);
int _printint(va_list values);
int _putchar(char c);
#endif
