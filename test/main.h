#ifndef newprint
#define newprint
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * struct ops - a struct datatype
 * @op: pointer to char
 * @func: pointer to function
 * Return: void
 */
typedef struct ops
{
	char *op;
	int (*func)(va_list *ap);
} op_t;
int spec_s(va_list *ap);
int spec_c(va_list *ap);
int print_number(int n);
int spec_d(va_list *ap);
int spec_i(va_list *ap);
int _write(char s);
int (*get_op_func(const char *s))(va_list *);
int _printf(const char *format, ...);
#endif
