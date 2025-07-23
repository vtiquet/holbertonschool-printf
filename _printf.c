#include "main.h"

/**
 * _printf - a function that produces output according to a format.
 * @format:  character to print
 *
 * Return:  the number of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, count = 0;
	int (*handler_func)(va_list);

	if (format == NULL)
		return (-1);
	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
			{
				va_end(args);
				return (-1);
			}
			handler_func = which_handler(format, i);
			if (handler_func)
			{
				count = count + handler_func(args);
			}
			else
			{
				_putchar('%');
				_putchar(format[i]);
				count = count + 2;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
