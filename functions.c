#include <stdarg.h>
#include <stdio.h>
/**
 * print_char - functions that prints char character from va_list
 * @list: list of arguments
 * Return: Return always 1
 */
int print_char(va_list list)
{
	char temp = va_arg(list, int);

	putchar(temp);
	return (1);
}

/**
 * print_string - prints string from va_list
 *@list: list of arguments
 *Return: length of the string
 */

int print_string(va_list list)
{
	char *temp = va_arg(list, char *);
	int i = 0;
	int length = 0;
	char *nul = "(null)";

	if (temp)
	{
	while (temp[i] != '\0')
	{
		putchar(temp[i]);
		length++;
		i++;
	}
	}
	else
	{
		while (nul[i] != '\0')
		{
			putchar(nul[i]);
			length++;
			i++;
		}
	}


	return (length);
}
/**
 *print_int_recursion - prints an int from va_list
 *@number: number to be printed
 *@count: number of digits
 *Return: number of digits
 */
int print_int_recursion(long int number, int count)
{
	if (number < 0)
	{
		putchar('-');
		count++;
		number = number * -1;
	}

	if (number / 10 == 0)
	{
		putchar('0' + (number % 10));

	}
	else
	{
		count = print_int_recursion(number / 10, count);
		putchar('0' + (number % 10));
	}
	return (count + 1);
}


/**
 * print_int - prints an int from va_list
 * @list: list of arguments
 * Return: length of the int
 */

int print_int(va_list list)
{
	long int number = (long int) va_arg(list, int);

	return (print_int_recursion(number, 0));
}

