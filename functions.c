#include "main.h"
#include <stdarg.h>

/**
 * functions - functions
 return: always 0
 */
int _printchar(va_list values)
{
	char c = va_arg(values, int);

	return (write(1, &c, 1));
}

int _printString(va_list values)
{
	char *str = va_arg(values, char *);
	int count = 0;

	if (str == NULL)
		str = "(null)";

	while (*str)
	{
		_putchar_c(*str);
		count++;
		str++;
	}
	return count;
}

int _printdec(va_list values)
{
} 

int _printint(va_list ar_numlist)
{
    int num = va_arg(ar_numlist, int);
    int count = putchar(num);

    return count;
}
