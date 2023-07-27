# _printf 

## Introduction

This project involves creating a custom implementation of the *_printf* function that generates formatted output based on a given format string. The function is designed to mimic the behavior of the standard C library function printf. The _printf function is responsible for writing the formatted output to the standard output stream, also known as *stdout*.
The goal of this project is to create a flexible and efficient implementation of _printf that can handle various input formats and produce the expected output. 

## Function Prototype
The prototype for the custom _printf function is as follows:
```
int _printf(const char *format, ...);
```

## Return value
The _printf function returns an integer, representing the total number of characters printed (excluding the null byte used to terminate strings). If an error occurs during the execution of _printf, it returns a negative value.

## Supported Conversion Specifiers

 The format string provided to the function contains zero or more directives, each corresponding to a specific conversion specifier. The supported conversion specifiers in this project are:

* %c: Character - Output a single character.
* %s: String - Output a null-terminated string.
* %%: Percent sign - Output a literal '%' character.
* %d and %i: Integer - Outputs a signed decimal integer.

For each conversion specifier encountered in the format string, the _printf function processes the input arguments accordingly and writes the formatted result to stdout. 

## How to use
1. Compile the source code
```
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
```
2. Include the custom main.h header file in your C source files:
```
#include "main.h"
```
3. Use the _printf function in your code, just like the standard printf.
```
int main() {
    _printf("Hello, %s! The answer is %d.\n", "user", 42);
    return 0;
}
```
## Example
```
int main(void)
{
	int len;

    len = _printf("Let's try to printf a simple sentence.\n");
    return 0;
}
```
Output:
```
Let's try to printf a simple sentence.
```
