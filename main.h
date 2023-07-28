#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
/**
 * *struct Print - struct print
 *@id: identifier of the function
 *@print: function associated with the identifier
 */

typedef struct Print
{
	char *id;
	int (*print)(va_list list);
} print;

int _printf(const char *format, ...);
int print_char(va_list list);
int print_string(va_list list);
int print_int(va_list list);
int print_double(va_list list);
int (*get_function(char c))(va_list);
int print_binary(va_list list);
int covert_binary(unsigned int b, int count);
int print_uint(va_list list);
int print_uint_recursion(unsigned int number, int count);
int convert_octal(va_list list);
int print_octal_recursion(unsigned int number, int count);
int convert_to_hex(va_list list);
int convert_to_hex_recursion(unsigned int number, int count);
int convert_to_HEX(va_list list);
int convert_to_HEX_recursion(unsigned int number, int count);
#endif

