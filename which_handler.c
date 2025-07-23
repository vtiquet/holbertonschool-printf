#include "main.h"

/**
* which_handler - a function that use the right specifiers.
* @format:  character to print.
* @i2: index of the specifier.
* Return:  the right specifiers.
*/
int (*which_handler(const char *format, int i2))(va_list)
{
	handler_t handlers[] = {
		{'c', _printc},
		{'s', _prints},
		{'%', _printp},
		{'\0', NULL}
	};
	int i1 = 0;

	while (handlers[i1].specifier)
	{
		if (format[i2] == handlers[i1].specifier)
		{
			return (handlers[i1].handler);
		}
		i1++;
	}

	return (NULL);
}
