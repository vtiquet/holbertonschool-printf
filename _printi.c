#include "main.h"

/**
 * _printn - a function that print an unsigned int.
 * @n: The unsigned integer to be printed.
 * Return: The number of characters printed.
 */
int _printn(unsigned int n)
{
	int i = 0;

	if (n / 10)
	{
		i = i + _printn(n / 10);
	}

	_putchar((n % 10) + '0');
	return (i + 1);
}

/**
 * _printi - a function that print an integer.
 * @args: The list of arguments containing the character to be printed.
 * Return: The number of characters printed.
 */
int _printi(va_list args)
{
	int n = va_arg(args, int);
	int i = 0;
	unsigned int un;

	if (n < 0)
	{
		_putchar('-');
		i++;
		un = -n;
	}
	else
	{
		un = n;
	}

	i = i + _printn(un);
	return (i);
}
