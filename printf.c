#include "main.h"

/**
 * _printf - function that produces output
 *@const: char
 *@format: string
 */
 int _printf(const char *format, ...)
{
	func_t specifiers [] = {
		{"c", _printchar},
		{"s", _printString},
		{"d", _printdec},
		{"i", _printint},
		{"%", _printchar},
		{NULL, NULL}
	};
	va_list values;
	int i, j, count = 0;

	va_start(values, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			putchar(format[i]);
			count++;
		}
		else
		{
			for (j = 0; j < 5; j++)
				if(*specifiers[j].t == format[i + 1])
				{
					count += specifiers[j].f(values);
					break;
				}
		}
	}
	va_end(values);
	return (count);
}
