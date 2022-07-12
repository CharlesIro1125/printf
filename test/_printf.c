#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 * _printf - A printf function.
 * @format: the string format passed
 * to the printf function.
 * description: prints out the string passed with the
 * neccessary conversion specifics.
 * Return: 0 for success and other for failure.
 */
int _printf(const char *format, ...)
{
	int i, j, len, set1 = 1, set2 = 0;
	char *str;
	unsigned char v;
	va_list ap;

	if (!format)
		exit(98);
	va_start(ap, format);
	while (format[i] != '\0')
		i++;
	len = i;
	for (j = 0; j < 1; j++)
	{
		if (format[j] == '%')
		{
			set1 = 0;
			set2 = 1;
		}
		if (set1)
			_write(format[j]);
		if (set2)
		{
			if ((format[j] == 'c' || format[j] == 's') &&
((format[j - 2] == '%') != (format[j - 1] == '%')))
			{
				if (format[j] == 'c')
				{
					v = va_arg(ap, int);
					if (v)
						_write(v);
				}
				if (format[j] == 's')
				{
					int k = 0;

					str = va_arg(ap, char *);
					while (str[k] != '\0')
					{
						_write(str[k]);
						k++;
					}
				}
			}
			else if (format[j] != '%')
				_write(format[j]);
			if (j && (format[j] == '%') && (format[j - 1] == '%'))
				_write(format[j]);
		}
		if (j == (len - 1))
		{
			if (format[j] != '\n')
				_write('\n');
			va_end(ap);
		}
	}
	return (0);
}
