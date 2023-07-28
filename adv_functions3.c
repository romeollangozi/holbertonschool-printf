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
/**
 *print_STRING - prints only ASCII characters greater than 32 and less than 127
 *@list: list of arguments
 *Return: number of characters printed
 */
int print_STRING(va_list list)
{
	char *string = va_arg(list, char *);
	int count = 0;
	int i = 0;

	while (string[i] != '\0')
	{
		if (string[i] > 32 && string[i] < 127)
		{
			putchar(string[i]);
			count++;
		}
		else
		{
			putchar('\\');
			putchar('x');
			count += 2;
			if (string[i] <= 16)
			{
				count++;
				putchar('0');
				count += convert_to_HEX_recursion(string[i], 0);
			}
			else
				count += convert_to_HEX_recursion(string[i], 0);

		}
		i++;
	}
	return (count);
}

