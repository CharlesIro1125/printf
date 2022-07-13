#ifndef newprint
#define newprint

#include <stdlib.h>
#include <stdarg.h>
typedef struct ops
{
	char *op;
	int (*func)(va_list ap);
} op_t;
int spec_s(va_list ap);
int spec_c(va_list ap);
int spec_d(va_list ap);
int spec_i(va_list ap);
int _write(char s);
int (*get_op_func(const char *s))(va_list);
int _printf(const char *format, ...);
#endif
