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
	(void) values;
	return (0);
}

int _printdec(va_list values)
{
	int num = va_arg(values, int);
	int count = 0;

	count += _write_dec(num);

	return count;
}
int _printint(va_list ar_numlist)
{
	(void) ar_numlist;
	return (0);
}
