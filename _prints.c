#include "main.h"

/**
 * _prints - a function that print a string.
 * @args: The list of arguments containing the character to be printed.
 * Return: The number of characters printed.
 */
int _prints(va_list args)
{
	char *s = va_arg(args, char *);
	int i = 0;

	if (s == NULL)
		s = "(null)";

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}
