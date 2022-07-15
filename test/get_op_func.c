#include "main.h"
/**
 * get_op_func - a function for print character
 * specifier
 * @s: string pointer
 * Return: pointer to a funtion
 */
int (*get_op_func(const char *s))(va_list *)
{
	int i;
	op_t ops[] = {
		{"c", spec_c},
		{"s", spec_s},
		{"d", spec_d},
		{"i", spec_i},
		{"o", spec_o},
		{"x", spec_x},
		{"b", spec_b},
		{"u", spec_u},
		{NULL, NULL}
	};

	i = 0;
	while (ops[i].op != NULL)
	{
		if (*(s + 0) == *(ops[i].op))
			return (ops[i].func);
		i++;
	}
	return (NULL);
}
