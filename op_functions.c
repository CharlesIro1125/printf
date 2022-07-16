#include "main.h"
/**
 * invert - one'S compliment of binary
 * @a: int
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
 * @a: int
 * Return: char the number of string
 */
int hex(int a)
{
	if (a == 10)
		return (97);
	else if (a == 11)
		return (98);
	else if (a == 12)
		return (99);
	else if (a == 13)
		return (100);
	else if (a == 14)
		return (101);
	else if (a == 15)
		return (102);
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
	int ptr[300];

	num = va_arg(*ap, int);
	if (num == '\0')
	{
		_write('0');
	}
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
	if (sgn)
	{
		do {
			_write(ptr[j] + '0');
			j--;
		} while (ptr[j + 1]  == 0);
		if (j > -1)
		{
			while (j >= 0)
			{
				_write(invert(ptr[j]) + '0');
				j--;
			}
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
	unsigned int num, p = 0;
	int ptr[300];

	num = va_arg(*ap, int);
	if (num == '\0')
	{
		_write('0');
	}
	if (num < p)
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
	{
		if (ptr[j] >= 0 && ptr[j] <= 9)
			_write(ptr[j] + '0');
		else
			_write(ptr[j]);
	}
	return (0);
}
/**
 * spec_X -print hexadecimal using
 * specification
 * @ap: va_list instance
 * Return: int the number of string
 */
int spec_X(va_list *ap)
{
	int i, j = 0;
	unsigned int num, p = 0;
	int ptr[300];

	num = va_arg(*ap, int);
	if (num == '\0')
	{
		_write('0');
	}
	if (num < p)
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
	{
		if (ptr[j] >= 0 && ptr[j] <= 9)
			_write(ptr[j] + '0');
		else
			_write(ptr[j]);
	}
	return (0);
}
