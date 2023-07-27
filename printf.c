#include <stdio.h>
#include "main.h"
#include <stdarg.h>


/**
 * _printf - Printf function
 * @format: String charactere.
 * Return: longue.
 */
int _printf(const char *format, ...)
{
	va_list list;
	unsigned int i, longue = 0;

	va_start(list, format);

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{   _putchar('%');
				i = i + 1;
				longue++;
			}
			else if (character_s(format, i + 1) != NULL)
			{   longue += character_s(format, i + 1)(list);
				i = i + 1;
			}
			else
			{ _putchar(format[i]);
				longue++;
			}
		}
		else
		{ _putchar(format[i]);
			longue++;
		}
	}
	va_end(list);
	return (longue);
}
