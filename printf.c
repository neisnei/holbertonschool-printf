#include "main.h"

/**
 * _printf - function that produces output
 *@format: string
 *Return: count
 */
int _printf(const char *format, ...)
{
	func_t specifiers[] = {
		{"c", _printchar},
		{"s", _printString},
		{"d", _printdec},
		{"i", _printint},
		{NULL, NULL}
	};
	va_list values;
	int i, j, count = 0;

	va_start(values, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			count += _putchar(format[i]);
		}
		else
		{
			if (format[i + 1] == '%')
			{
				count += _putchar('%');
			}
			else
			{
				for (j = 0; j < 4; j++)
				{
					if (*specifiers[j].t == format[i + 1])
					{
						format++;
						count += specifiers[j].f(values);
						break;
					}
				}
			}
		}
	}
	va_end(values);
	return (count);
}
