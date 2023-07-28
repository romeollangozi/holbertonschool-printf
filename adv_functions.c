#include <stdio.h>
#include <stdarg.h>
/**
 * convert_binary - converts a number into binary with recursion
 *@b: number to be converted
 *@count: counts the length of the binary
 *Return: length of the binary
 */

int convert_binary(unsigned int b, int count)
{
	if (b < 2)
	{
		putchar('0' + b);
	}
	else if (b >= 2)
	{
		count = convert_binary(b / 2, count);
		putchar('0' + (b % 2));
	}
	return (count + 1);
}
/**
 *print_binary - prints number into binary
 *@list: list of arguments
 *Return: length of binary output
 */
int print_binary(va_list list)
{
	unsigned int i = va_arg(list, unsigned int);

	return (convert_binary(i, 0));
}

/**
 *print_uint_recursion - prints an unsigned int from va_list
 *@number: number to be printed
 *@count: number of digits
 *Return: number of digits
 */
int print_uint_recursion(unsigned int number, int count)
{

	if (number / 10 == 0)
	{
		putchar('0' + (number % 10));

	}
	else
	{
		count = print_uint_recursion(number / 10, count);
		putchar('0' + (number % 10));
	}
	return (count + 1);
}

/**
*print_uint - prints an usigned int
*@list: list of arguments
*Return: number of digits of the number printed
*/

int print_uint(va_list list)
{
	unsigned int number = va_arg(list, unsigned int);

	return (print_uint_recursion(number, 0));
}
