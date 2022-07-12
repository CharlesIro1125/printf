#include <stdarg.h>
#include <stdlib.h>
#include "main.h"
/**
 * _printf - A printf function.
 * @format: the string format passed
 * decription: prints out the string passed
 * with the spec.
 * Return: 0 for success and other for failure.
 */
int _printf(const char *format, ...)
{
	int i = 0, count = 0, j, len, set1 = 1, set2 = 0;
	va_list ap;
	int (*func)(va_list);

	if (format == NULL)
		exit(-1);

	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[j] == '%')
		{
			if (set)
			{
				set = 0;
				_write(format[j]);
				count--;
			}
			else
			{
				set = 1;
			}
			j++;
			continue;
		}
		else if (!set)
		{
			_write(format[j]);
			j++;
			continue;
		}
		if(set)
		{
			if (format[j] == ' ')
			{
				count--;
				continue;
			}
			else
			{
				func = g
		
