#ifndef newprint
#define newprint
typedef struct ops
{
	char *op;
	int (*)func(va_list ap);
} op_t;
int spec_s(va_list ap);
int spec_c(va_list ap);
int _write(char s);
int (*get_op_func(char *s))(va_list);
int _printf(const char *format, ...);
#endif
