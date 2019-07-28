#include "holberton.h"
/**
* get_func - search and return the correct function
* @s: array to check
* Return: return a function
**/
int (*get_func(char s))(va_list)
{
	op_t ops[] = {
		{"c", print_c},
		{NULL, NULL}
	};

	int i;

	for (i = 0; ops[i].c != NULL; i++)
	{
		if (*ops[i].c == s)
		{
			return (ops[i].f);
		}
	}
}
