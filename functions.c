#include <stdarg.h>
#include <stdio.h>
/**
 * print_char - functions that prints char character from va_list
 * @list: list of arguments
 * Return: Return always 1
 */
int print_char(va_list list)
{
	char temp = va_arg(list, char);

	putchar(temp);
	return (1);
}
