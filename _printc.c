#include "main.h"

/**
 * _printc - a function that print a charater.
 * @args: The list of arguments containing the character to be printed.
 * Return: The number of characters printed (always 1).
 */
int _printc(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}
