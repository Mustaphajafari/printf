#include "main.h"
/**
 *handle_char - prints a char
 *@c: variadic argument
 *Return: 1.
 **/
int handle_char(va_list c)
{
	char car = (char) va_arg(c, int);

	_putchar (car);

	return (1);
}
