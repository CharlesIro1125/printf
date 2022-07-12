#include "main.h"
#include <stdlib.h>

/**
 * get_op_func - a function for print character
 * specifier
 * @s: string pointer
 * Return: pointer to a funtion
 */
int (*get_op_func(char *s))(va_list)
{
	int i;
	op_t ops[] = {
		{"c", spec_c},
		{"s", spec_s},
		{"d", spec_d},
		{"i", spec_d},
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
