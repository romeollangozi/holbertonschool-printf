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
 * print_int - prints an integer from va_list
 * @list: list of arguments
 * Return: length of the int
 */

int print_int(va_list list)
{
	int number = va_arg(list, int);
	int l = 1;
	int t = number;
	int r = 1;

	if (number < 0)
	{
		_putchar('-');
		t = t * -1;
		n = n * -1;
	}
	while (t > 9)
	{
		t = t / 10;
		l = l * 10;
		r++;
	}
	while (l > 0)
	{
		_putchar('0' + (n / l) % 10);
		l = l / 10;
	}
	return (r);

}

