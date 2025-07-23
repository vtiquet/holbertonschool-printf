#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct handler
{
	char specifier;
	int (*handler)(va_list args);
} handler_t;

int _putchar(char c);
int _printf(const char *format, ...);
int _printc(va_list args);
int _prints(va_list args);
int _printp(va_list args);
int _printi(va_list args);

int (*which_handler(const char *format, int i2))(va_list);

#endif /*MAIN_H*/
