#include <stdarg.h>
#include <stdlib.h>
#include "main.h"
/**
 * _printf - A printf function.
 * @format: the string format passed
 * description: prints out the string passed with the spec
 * Return: 0 for success and other for failure.
 */
int _printf(const char *format, ...)
{
	int i = 0, count = 0, j, len, set1 = 1, set2 = 0;
	char *str;
	unsigned char v;
	va_list ap;

	if (!format)
		exit(1);
	va_start(ap, format);
	while (format[i] != '\0')
		i++;
	len = i;
	count = i;
	for (j = 0; j < i; j++)
	{
		if (format[j] == '%')
		{
			if (set2)
			{
				set1 = 1;
				set2 = 0;
				count--;
			}
			else
			{
				set1 = 0;
				set2 = 1;
			{
		}
		if (set1)
			_write(format[j]);
		if (set2)
		{
			if (format[j] == ' ')
				count--;
			else if ((format[j] == 'c' || format[j] == 's'))
			{
				if (format[j] == 'c')
				{
					v = va_arg(ap, int);
					if (v)
						_write(v);
					else
						exit(1);
					count--;
				}
				if (format[j] == 's')
				{
					int k = 0;

					str = va_arg(ap, char *);
					if (!str)
						exit(1);
					while (str[k] != '\0')
					{
						_write(str[k]);
						k++;
					}
					count -= 2;
					count += k;
				}
				set1 = 1;
				set2 = 0;
			}
			else if (format[j] != '%')
			{
				_write(format[j]);
				set1 = 1;
				set2 = 0;
			}
		}
		if (j == (len - 1))
		{
			if (format[j] != '\n')
				_write('\n');
			va_end(ap);
		}
	}
	return (count);
}
