#include <stdio.h>
#include <stdarg.h>

/**
 * convert_to_hex_Recursion - converts a number from base 10 to 16
 * @number: number to be converted
 * @count: number of digits
 * Return: count
 */

int convert_to_hex_Recursion(long int number, int count)
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
		count = convert_to_hex_Recursion(number / 16, count);
		if (number % 16 < 10)
			putchar('0' + (number % 16));
		else
			putchar('0' + (number % 16) + 39);
	}

	return (count + 1);
}

/**
 *print_pointer - prints addres of the argument given
 *@list: list of arguments
 *Return: characters printed
 */

int print_pointer(va_list list)
{
	int count;
	void *pointer;

	count = 2;
	pointer = va_arg(list, void *);
	putchar('0');
	putchar('x');
	count += convert_to_hex_Recursion((long int) pointer, 0);

	return (count);
}

