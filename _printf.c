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
	int i = 0, j = 0, set = 0;
	va_list ap;
	int (*func)(va_list *);

	if (format == NULL)
		return (-1);

	va_start(ap, format);
	while (format[j] != '\0')
	{
		if (format[j] == '%')
		{
			if (set)
			{
				set = 0;
				_write(format[j]);
				i++;
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
			i++;
			continue;
		}
		if (set)
		{
			if (format[j] == ' ')
			{
				j++;
				continue;
			}
			else
			{
				func = get_op_func(&format[j]);
				if (func == NULL)
				{
					/**
					if (format[j] != '!')
					{
						_write('%');
						i++;
					}
					*/
					_write('%');
					i++;
					_write(format[j]);
					i++;
					set = 0;
				}
				else
				{
					i += func(&ap);
					set = 0;
				}
				j++;
			}
		}
	}
	va_end(ap);
	return (i);
}
