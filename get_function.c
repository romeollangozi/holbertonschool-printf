#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *get_function - get a character and returns the appropriate function
 *@c: character to be matched
 *Return: returns a function
 */

int (*get_function(char c))(va_list)
{
	int i = 0;
	print prints[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_int},
		{"b", print_binary},
		{"d", print_int},
		{"u", print_uint},
		{"o", convert_octal},
		{"x", convert_to_hex},
		{"X", convert_to_HEX},
		{NULL, NULL}
	};

	while (prints[i].id)
	{
		if (*prints[i].id == c)
			return (prints[i].print);
		i++;
	}

	return (NULL);
}

