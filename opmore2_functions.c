#include "main.h"
/**
 * hex1 - gets the hex letter
 * @a: int
 * Return: char the number of string
 */
int hex1(int a)
{
	if (a == 10)
		return (65);
	else if (a == 11)
		return (66);
	else if (a == 12)
		return (67);
	else if (a == 13)
		return (68);
	else if (a == 14)
		return (69);
	else if (a == 15)
		return (70);
	else
		return (a);
}
/**
 * spec_i -print int using
 * specification
 * @ap: va_list instance
 * Return: int the number of string
 */
int spec_i(va_list *ap)
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
/**
 * spec_u -print unsigned int using
 * specification
 * @ap: va_list instance
 * Return: int the number of string
 */
int spec_u(va_list *ap)
{
	unsigned int num;
	int k = 0;

	if (ap)
	{
		num = va_arg(*ap, int);
		if (num == '\0')
		{
			_write('0');
			return (0);
		}
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
	unsigned int num, p = 0;
	int *ptr;

	ptr = malloc(sizeof(int) * 100);
	if (ptr == NULL)
	{
		free(ptr);
		return (-1);
	}
	num = va_arg(*ap, int);
	if (num == '\0')
	{
		_write('0');
	}
	if (num < p)
	{
		num *= -1;
		sgn = 1;
	}
	while (num != p)
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
