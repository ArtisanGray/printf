#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdarg.h>
#include <ctype.h>

int spec_handler(va_list(args), char spec);
int _printf(const char *format, ...);
int _putchar(int c);
int _puts(va_list(args));
int _itoa(va_list(args));
int _uitoa(va_list(args));
int print_rev(char *s);
int _strlen(char *s);

#endif
