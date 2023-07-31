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
		{"d", _printint},
		{"i", _printint},
		{"%", _printPercent},
		{NULL, NULL}
	};
	va_list values;
	int i, j, count = 0;

	if (!format)
		return (-1);
	va_start(values, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			count += _putchar(format[i]);
		else
		{
			for (j = 0; j < 5; j++)
			{
				if (*specifiers[j].t == format[i + 1])
				{
					format++;
					count += specifiers[j].f(values);
					break;
				}
			}
			if (j == 5 && format[i + 1] == '\0')
				return (-1);
			else if (j == 5 && format[i + 1] != '\0')
				count += _putchar(format[i]);

		}
	}
	va_end(values);
	return (count);
}
