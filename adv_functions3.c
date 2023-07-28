#include <stdio.h>
#include <stdarg.h>

/**
 * convert_to_HEX_recursion - converts a number from base 10 to 16
 * @number: number to be converted
 * @count: number of digits
 * Return: count
 */

int convert_to_HEX_recursion(unsigned int number, int count)
{
	if (number / 16 == 0)
	{
		if (number % 16 < 10)
			putchar('0' + (number % 16));
		else
			putchar('0' + (number % 16) + 7);
	}
	else
	{
		count = convert_to_HEX_recursion(number / 16, count);
		if (number % 16 < 10)
			putchar('0' + (number % 16));
		else
			putchar('0' + (number % 16) + 7);
	}

	return (count + 1);
}

/**
 * convert_to_HEX - converts number from base 10 to base 16
 *@list: list of arguments
 *Return: number of digits
 */

int convert_to_HEX(va_list list)
{
	unsigned int number = (long int) va_arg(list, unsigned int);

	return (convert_to_HEX_recursion(number, 0));
}

