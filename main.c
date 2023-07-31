#include "main.h"
/**
 * main c - printf
 * return: always 0
 */
int main (void)
{
	_printf("%c", 'N');
	return (0);
}

int _printint(va_list ar_numlist)
{
	printf("%i", 'i');
	return (0);
}

int _printdec(va_list values)
{
	printf("%d", 'd');
	return (0);
}

int _printString(va_list values);
{
	printf("%s", 's');
	return (0);
}

int _printchar(va_list values);
{
	printf("%c", 'c');
	return (0);
}

int _printf(const char *format, ...)
{
	printf("%%", '%');
	return (0);
}
