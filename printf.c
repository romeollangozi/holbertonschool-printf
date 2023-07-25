#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
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
	int length = strlen(format);

	if (format != NULL)
	{
		if ((length != 1) || (format[0] != '%'))
			{
			va_start(args, format);
			while (format[i] != '\0')
			{
				if (format[i] == '%')
				{
					func = get_function(format[i + 1]);
					if (func)
					{
						count += func(args);
						i += 2;
					}
					else if (format[i + 1] == '%')
						i++;
				}
				putchar(format[i]);
				i++;
				count++;
			}
		return (count);
		}
	}
	return (-1);
}
