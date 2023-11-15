#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>



/**
 * struct format - struct specifier
 * @t: the valid character.
 * @f: pointer-function associated with the argument.
 *
 */

typedef struct format
{
	char *t;
	int (*f)();
} convert_spec;

int _putchar(char c);
int _printf(const char *format, ...);
int printf_char(va_list val);
int printf_string(va_list val);
int _strlen(char *s);
int _strlenc(const char *s);
int printf_37(void);
int printf_int(va_list args);
int printf_dec(va_list args);

#endif
