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
			_write('i');
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
int print_number(int n)
{
	int num = n, k = 0;

	if (num < 0)
	{
		_write('-');
		k++;
		num = -num;
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
 * spec_d -print decimal using
 * specification
 * @ap: va_list instance
 * Return: int the number of string
 */
int spec_d(va_list *ap)
{
	int num, k = 0;

	if (ap)
	{
		num = va_arg(*ap, int);
		if (num == '\0')
			return (-1);
		k += print_number(num);
	}
	return (k);
}
/**
 * spec_i -print int using
 * specification
 * @ap: va_list instance
 * Return: int the number of string
 */
int spec_i(va_list *ap)
{
	int num, k = 0;

	if (ap)
	{
		num = va_arg(*ap, int);
		if (num == '\0')
			return (-1);
		k += print_number(num);
	}
	return (k);
}
/**
 * spec_u -print unsigned int using
 * specification
 * @ap: va_list instance
 * Return: int the number of string
 */
int spec_u(va_list *ap)
{
	int num, k = 0;
	
	if (ap)
	{
		num = va_arg(*ap, int);
		if (num == '\0')
			return (-1);
		k += print_number(num);
	}
	return (k);
}
/**
 * spec_o -print octal numbers using
 * specification
 * @ap: va_list instance
 * Return: int the number of string
 */
int spec_o(va_list *ap)
{
	int i, j = 0, sgn = 0;
	int num;
	int *ptr;

	ptr = malloc(sizeof(int) * 100);
	if (ptr == NULL)
	{
		free(ptr);
		return (-1);
	}
	num = va_arg(*ap, int);
	if (num == '\0')
		return (-1);
	if (num < 0)
	{
		num *= -1;
		sgn = 1;
	}
	while (num != 0)
	{
		i = num % 8;
		ptr[j] = i;
		num = num / 8;
		j++;
	}
	if (sgn)
		_write('1');
	--j;
	for (; j >= 0; j--)
		_write(ptr[j] + '0');
	free(ptr);
	return (0);
}
/**
 * invert - one'S compliment of binary
 * @ap: va_list instance
 * Return: int the number of string
 */
int invert(int a)
{
	if (a == 0)
		return (1);
	else if (a == 1)
		return (0);
	return (-1);
}
/**
 * hex - gets the hex letter
 * @ap: va_list instance
 * Return: char the number of string
 */
char hex(int a)
{
	if (a == 10)
		return ('A');
	else if (a == 11)
		return ('B');
	else if (a == 12)
		return ('C');
	else if (a == 13)
		return ('D');
	else if (a == 14)
		return ('E');
	else if (a == 15)
		return ('F');
	else
		return (a);
}
/**
 * spec_b -print binary string using
 * specification
 * @ap: va_list instance
 * Return: int the number of string
 */
int spec_b(va_list *ap)
{
	int i, j = 0, sgn = 0;
	int num;
	int *ptr;

	ptr = malloc(sizeof(int) * 100);
	if (ptr == NULL)
	{
		free(ptr);
		return (-1);
	}
	num = va_arg(*ap, int);
	if (num == '\0')
		return (-1);
	if (num < 0)
	{
		num *= -1;
		sgn = 1;
	}
	while (num != 0)
	{
		i = num % 2;
		ptr[j] = i;
		num = num / 2;
		j++;
	}
	j--;
	do {
		_write(ptr[j] + '0');
		j--;
	} while (ptr[j + 1]  == 0);
	if (j > -1)
	{
		if (sgn)
		{
			while (j >= 0)
			{
				_write(invert(ptr[j]) + '0');
				j--;
			}
		}
		else
		{
			while (j >= 0)
			{
				_write(ptr[j] + '0');
				j--;
			}
		}
	}
	free(ptr);
	return (0);
}
/**
 * spec_x -print hexadecimal using
 * specification
 * @ap: va_list instance
 * Return: int the number of string
 */
int spec_x(va_list *ap)
{
	int i, j = 0;
	int num;
	int *ptr;
	
	ptr = malloc(sizeof(int) * 100);
	if (ptr == NULL)
	{
		free(ptr);
		return (-1);
	}
	num = va_arg(*ap, int);
	if (num == '\0')
		return (-1);
	if (num < 0)
	{
		num *= -1;
	}
	while (num != 0)
	{
		i = num % 16;
		if (i > 9)
			ptr[j] = hex(i);
		else
			ptr[j] = i;
		num = num / 16;
		j++;
	}
	--j;
	for (; j >= 0; j--)
		_write(ptr[j] + '0');
	free(ptr);
	return (0);
}
