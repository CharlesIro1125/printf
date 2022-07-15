#include "main.h"
/**
 * spec_i -print int using
 * specification
 * @ap: va_list instance
 * Return: int the number of string
 */
int spec_i(va_list *ap)
{
	int num;
	int k = 0;

	if (ap)
	{
		num = va_arg(*ap, int);
		if (num == '\0')
			return (-1);
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
		return (-1);
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
