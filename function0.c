#include "main.h"
#include <stdio.h>

/**
 * handle_string - Prints a string or "null" if str is NULL.
 * @s: variadic variable
 * Return: The number of characters printed.
 */

int handle_string(va_list s)
{
	char *str;
	int a;

	str = va_arg(s, char *);
	if (str == NULL)
	{
		str = "(null)";
	}
	for (a = 0; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	return (a);
}

















