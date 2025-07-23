#include "main.h"

/**
 * _printp - a function that print a '%'.
 * @args: The list of arguments containing the character to be printed.
 * Return: The number of characters printed (always 1).
 */
int _printp(va_list args)
{
	(void)args;
	_putchar('%');
	return (1);
}
