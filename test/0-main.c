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
	_printf("Length:[%d, %i]\n", len, len);
         printf("Length:[%d, %i]\n", len2, len2);
	 /**
	 *_printf("Character:[%c]\n", 'H');
	 *printf("Character:[%c]\n", 'H');
	 *_printf("String:[%s]\n", "I am a string !");
	 *printf("String:[%s]\n", "I am a string !");
	 *_printf("Length:[%d, %i]\n", len, len);
	 *printf("Length:[%d, %i]\n", len2, len2);
	 _printf("binary:[%b, %b]\n", 5, -5);
	 printf("binary:[%b, %b]\n", 34, -34);
	 _printf("%d", INT_MIN);
	 printf("%d", INT_MIN);
	 _printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	 printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	 _printf("%i", INT_MIN);
	 printf("%i", INT_MIN);
	 _printf("%i + %i = %i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	 printf("%i + %i = %i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	 _printf("%u", 1024);
	 */
	 printf("%u", 1024);
	 _printf("%u", -1024);
	 printf("%u", -1024);
	 _printf("%u", 0);
	 printf("%u", 0);
	 _printf("%u", UINT_MAX);
	 printf("%u", UINT_MAX);
	 _printf("There is %u bytes in %u KB\n", 1024, 1);
	 printf("There is %u bytes in %u KB\n", 1024, 1);
	 _printf("%u - %u = %u\n", 2048, 1024, 1024);
	 _printf("%u - %u = %u\n", 2048, 1024, 1024);
	 _printf("%o", 1024);
	 printf("%o", 1024);
	 _printf("%o", -1024);
	 printf("%o", -1024);
	 _printf("%o", 0);
	 printf("%o", 0);
	 _printf("%o", UINT_MAX);
	 printf("%o", UINT_MAX);
	 _printf("There is %o bytes in %o KB\n", 1024, 1);
	 printf("There is %o bytes in %o KB\n", 1024, 1);
	 _printf("%o - %o = %o\n", 2048, 1024, 1024);
	 printf("%o - %o = %o\n", 2048, 1024, 1024);
	 _printf("%x", 1024);
	 printf("%x", 1024);
	 _printf("%x", -1024);
	 printf("%x", -1024);
	 _printf("%x", 0);
	 printf("%x", 0);
	 _printf("%x", UINT_MAX);
	 printf("%x", UINT_MAX);
	 _printf("There is %x bytes in %x KB\n", 1024, 1);
	 printf("There is %x bytes in %x KB\n", 1024, 1);
	 _printf("%x - %x = %x\n", 2048, 1024, 1024);
	 printf("%x - %x = %x\n", 2048, 1024, 1024);
	 _printf("%X", 1024);
	 printf("%X", 1024);
	 _printf("%X", -1024);
	 printf("%X", -1024);
	 _printf("%X", 0);
	 printf("%X", 0);
	 _printf("%X", UINT_MAX);
	 printf("%X", UINT_MAX);
	 _printf("There is %X bytes in %X KB\n", 1024, 1);
	 printf("There is %X bytes in %X KB\n", 1024, 1);
	 _printf("%X - %X = %X\n", 2048, 1024, 1024);
	 printf("%X - %X = %X\n", 2048, 1024, 1024);
	ui = (unsigned int)INT_MAX + 1024;
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", 450, 450);
	printf("Unsigned hexadecimal:[%x, %X]\n", 450, 450);
	_printf("Unsigned hexadecimal:[%x, %X]\n", 450, 450);
	printf("Unsigned hexadecimal:[%x, %X]\n", 450, 450);
	return (0);
}
