#include "main.h"
/**
 * spec_c - print character using
 * specification
 * @ap: va_list instance
 * Return: int the number of characters
 */
int spec_c(va_list *ap)
{
	int k = 0;
	unsigned char v;

	if (ap)
	{
		v = va_arg(*ap, int);
		if (v && (v > 0) && v != '\0')
		{
			_write(v);
			k++;
		}
		else if (v == '\0')
		{
			_write('\0');
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
int spec_s(va_list *ap)
{
	int k = 0;
	char *str;

	if (ap)
	{
		str = va_arg(*ap, char *);
		if (str != NULL)
		{
			while (str[k] != '\0')
			{
				_write(str[k]);
				k++;
			}
		}
		else if (str == NULL)
		{
			_write('(');
			_write('n');
			_write('u');
			_write('l');
			_write('l');
			_write(')');
			k = k + 6;
		}
		else
			return (-1);
	}
	return (k);
}
/**
 * print_number -print integers method
 * @n: signed int
 * Return: int the length of int printed
 */
int print_number(unsigned int n)
{
	unsigned int num = n, p = 0;
	int k = 0;

	if (num < p)
	{
		_write('-');
		k++;
		num = -1 * num;
	}
	if ((num / 10) > 0)
	{
		k += print_number(num / 10);
	}
	_write((num % 10) + '0');
	k++;
	return (k);
}
/**
 * print_number1 - print integers method
 * @n: signed int
 * Return: int the length of int printed
 */
int print_number1(long int n)
{
	long int num = n;

	int k = 0;

	if ((num / 10) > 0)
	{
		k += print_number1(num / 10);
	}
	_write((num % 10) + '0');
	k++;
	return (k);
}
/**
 * spec_d -print decimal using
 * specification
 * @ap: va_list instance
 * Return: int the number of string
 */
int spec_d(va_list *ap)
{
	long int num;
	int k = 0;

	if (ap)
	{
		num = va_arg(*ap, int);
		if (num == '\0')
		{
			_write('0');
			return (0);
		}
		if (num < 0)
		{
			_write('-');
			num = -1 * num;
			k++;
		}
		k += print_number1(num);
	}
	return (k);
}
