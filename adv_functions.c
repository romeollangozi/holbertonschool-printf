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

