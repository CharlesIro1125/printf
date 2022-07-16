#ifndef newprint
#define newprint

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
int print_number(unsigned int n);
int print_number1(long int n);
int spec_d(va_list *ap);
int spec_i(va_list *ap);
int spec_o(va_list *ap);
int spec_b(va_list *ap);
int spec_X(va_list *ap);
int invert(int a);
int hex(int a);
int spec_x(va_list *ap);
int spec_u(va_list *ap);
int _write(char s);
int (*get_op_func(const char *s))(va_list *);
int _printf(const char *format, ...);
#endif
