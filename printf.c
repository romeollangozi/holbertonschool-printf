#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *_printf - function that produces output according to a format
 *@format: format to be used to print the output
 *Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;
	int (*func)(va_list);
	int count = 0;

	if (format != NULL)
	{
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			func = get_function(format[i + 1]);
			if (func)
			{
				count += func(args);
				i += 2;
			}
			else
			{
				putchar(format[i + 1]);
				count++;
				i += 2;
			}
		}
		else
		{
			putchar(format[i]);
			i++;
			count++;
		}
	}
		return (count);
	}
	return (-1);
}
