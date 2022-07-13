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
	/**
	 * unsigned int ui;
	 * void *addr;
	 */
	 len = _printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
	 len2 = printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
	 _printf("Character:[%c]\n", 'H');
	 printf("Character:[%c]\n", 'H');
	 _printf("String:[%s]\n", "I am a string !");
	 printf("String:[%s]\n", "I am a string !");
	 _printf("Length:[%d, %i]\n", len, len);
	 printf("Length:[%d, %i]\n", len2, len2);
	 _printf("Negative:[%d]\n", -762534);
	 printf("Negative:[%d]\n", -762534);
	return (0);
}
