#ifndef our_printf
#ifndef main.h
#define our_printf
#define main.h
#define NULL ((void *)0)
#include <stdio.h>
#include <stdarg.h>

/**
 * struct specifier - struct specifier
 * @valid: the valid character.
 * @f: the functions associated.
 */
typedef struct specifier
{
	char *valid;
	int (*f)(va_list);
} spec;
int _printf(const char *format, ...);
int print_c(va_list args);
int print_s(va_list args);
int print_d(va_list args);
int print_i(va_list args);
int _putchar(char c);
int print_percent(va_list args);
int (*get_func(char x))(va_list args);
int _print_str(char *string);
int _print_int(long int var);
int _printf(const char *format, ...);
int to_Binary(unsigned int n);
int to_Octal(unsigned int n);
int _power_recursion(int x, int y);
int to_Hexa(unsigned int num);
#endif
