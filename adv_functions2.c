#include <stdio.h>
#include <stdarg.h>

/**
 * print_octal_recursion - converts a base 10 number into base 8
 * @number: deicmal number to be converted
 * @count: number of digits
 * Return: count
 */

int print_octal_recursion(unsigned int number, int count)
{
	if (number / 8 == 0)
		putchar('0' + (number % 8));
	else
	{
		count = print_octal_recursion(number / 8, count);
		putchar('0' + (number % 8));
	}

	return (count + 1);
}

/**
 *convert_octal - convertsa base 10 number into base 8
 *@list: list of arguments
 *Return: count
 */

int convert_octal(va_list list)
{
	unsigned int number;

	number = va_arg(list, unsigned int);

	return (print_octal_recursion(number, 0));
}

/**
 * convert_to_hex_recursion - converts a number from base 10 to 16
 * @number: number to be converted
 * @count: number of digits
 * Return: count
 */

int convert_to_hex_recursion(unsigned int number, int count)
{
	if (number / 16 == 0)
	{
		if (number % 16 < 10)
			putchar('0' + (number % 16));
		else
			putchar('0' + (number % 16) + 39);
	}
	else
	{
		count = convert_to_hex_recursion(number / 16, count);
		if (number % 16 < 10)
			putchar('0' + (number % 16));
		else
			putchar('0' + (number % 16) + 39);
	}

	return (count + 1);
}

/**
 * convert_to_hex - converts number from base 10 to base 16
 *@list: list of arguments
 *Return: number of digits
 */

int convert_to_hex(va_list list)
{
	unsigned int number = (long int) va_arg(list, unsigned int);

	return (convert_to_hex_recursion(number, 0));
}

