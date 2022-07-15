#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	
	 int len;
	 int len2;
	 unsigned int ui;
	 /*
	 * unsigned int ui;
	 * void *addr;
	 *
	 */
	len = _printf("%c", 'S');
	len2 = printf("%c", 'S');
	 /**
	 *_printf("Character:[%c]\n", 'H');
	 *printf("Character:[%c]\n", 'H');
	 *_printf("String:[%s]\n", "I am a string !");
	 *printf("String:[%s]\n", "I am a string !");
	 *_printf("Length:[%d, %i]\n", len, len);
	 *printf("Length:[%d, %i]\n", len2, len2);
	 */
	 _printf("binary:[%b, %b]\n", 5, -5);
	 printf("binary:[%b, %b]\n", 34, -34);
	 
	ui = (unsigned int)INT_MAX + 1024;
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %x]\n", 450, 450);
	printf("Unsigned hexadecimal:[%x, %X]\n", 450, 450);
	return (0);
}
