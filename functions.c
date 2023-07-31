#include "main.h"
#include <stdarg.h>

/**
 * _printchar - functions
 * @values: ...
 * Return: always 0
 */
int _printchar(va_list values)
{
	char c = va_arg(values, int);

	return (write(1, &c, 1));
}

/**
 * _printString - print string
 * @values: ...
 * Return:always
 */
int _printString(va_list values)
{
	int count = 0;
	char *s = va_arg(values, char *);

	while (*s != '\0')
	{
		count += _putchar(*s);
		s++;
	}
	return (count);
}

/**
 * _printint - print int
 * @values: ...
 * Return: 0
 */
int _printint(va_list values)
{
	int num = va_arg(values, int);
	int count = 0;
	char buffer[20];

	count += sprintf(buffer, "%d", num);
	write(1, buffer, count);
	return (count);
}

/**
 *_putchar - ...
 *@c: ...
 *Return: ...
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
