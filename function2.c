#include "main.h"
/**
 * handle_unsigned - change a string to an unsigned integer
 * and prints its value.
 * @u: variadic argument
 * Return: longue
 */
int handle_unsigned(va_list u)
{
	unsigned int d, var = 1, longue = 0;

	d = va_arg(u, unsigned int);

	while (d / var > 9)
	{
		var = var * 10;
	}
	while (var != 0)
	{
		longue = longue + _putchar(d / var + '0');
		d = d % var;
		var = var / 10;
	}
	return (longue);
}
