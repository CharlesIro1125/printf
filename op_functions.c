#include "main.h"
/**
 * spec_c - print character using
 * specification
 * @ap: va_list instance
 * Return: int the number of characters
 */
int spec_c(va_list ap)
{
	int k = 0;
	unsigned char v;

	if (ap)
	{
		v = va_arg(ap, int);
		if (v && (v > 0) && v != '\0')
		{
			_write(v);
			k++;
		}
		else
			return (-1);
	}
	return (k);
}
/**
 * spec_s -print string using
 * specification
 * @ap: va_list instance
 * Return: int the number of string
 */
int spec_s(va_list ap)
{
	int k = 0;
	char *str;

	if (ap)
	{
		str = va_arg(ap, char *);
		if (str != NULL)
		{
			while (str[k] != '\0')
			{
				_write(str[k]);
				k++;
			}
		}
		else
			return (-1);
	}
	return (k);
}
/**
 * spec_d -print string using
 * specification
 * @ap: va_list instance
 * Return: int the number of string
 */
int spec_d(va_list ap)
{
	va_arg(ap, char *);
	return (0);
}
/**
 * spec_i -print string using
 * specification
 * @ap: va_list instance
 * Return: int the number of string
 */
int spec_i(va_list ap)
{
	va_arg(ap, char *);
	return (0);
}
