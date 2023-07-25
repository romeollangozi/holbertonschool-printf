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
int print_float(va_list list);
int (*get_function(char c))(va_list);
#endif

