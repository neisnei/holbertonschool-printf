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
}

int _printdec(va_list values)
{
	int num = va_arg(values, int);
	int count = 0;

	if (num < 0)
	{
		_putchar_c('-');
		num *= -1;
	}

	if (num == 0)
	{
		_putchar_c('0');
		return 1;
	}

	int digits = 0;
	int temp = num;

	while (temp > 0)
	{
		temp /= 10;
		digits++;
	}

	while (digits > 0)
	{
		temp = num;
		for (int i = 1; i < digits; i++)
			temp /= 10;
		temp %= 10;
		_putchar_c('0' + temp);
		digits--;
		count++;
	}
}

int _printint(va_list ar_numlist)
{
    int num = va_arg(ar_numlist, int);
    int count = putchar(num);

    return count;
}
