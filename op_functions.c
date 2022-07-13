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
 * print_number -print integers using
 * specification
 * @n: signed int
 * Return: int the length of int printed
 */
int print_number(int n)
{
	int num = n, k = 0;

	if (num < 0)
	{
		_putchar('-');
		k++;
		num = -num;
	}
	if ((num / 10) > 0)
	{
		k += print_number(num / 10);
	}
	_putchar((num % 10) + '0');
	k++;
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
	int num, k = 0;

	num = va_arg(ap, int);
	if (num == '\0' && num == '\n')
		return (-1);
	k += print_number(num);
	return (k);
}
/**
 * spec_i -print string using
 * specification
 * @ap: va_list instance
 * Return: int the number of string
 */
int spec_i(va_list ap)
{
	int num, k = 0;

	num = va_arg(ap, int);
	if (num == '\0' && num == '\n')
		return (-1);
	k += print_number(num);
	return (k);
}
