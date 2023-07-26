#include <stdio.h>
#include "main.h"
#include <stdarg.h>
/**
  * handle_format - Helper function to handle format specifier
  * @format: string characters
  * @list: va_list
  * Return: num_chars
  */
int handle_format(const char* format, va_list list, int *count) 
{
	char specifier = *format;

	if (specifier == 'c') 
	{
		char c = va_arg(list, int);
		*count += _putchar(c);
	}
	else if (specifier == 's') 
	{
	char* str = va_arg(list, char*); 
	*count += handle_string(str);
	}
	else if (specifier == '%') 
	{
		_putchar('%');
		*count += 1;
	}
	else if (specifier == 'd' || specifier == 'i') 
	{
		int num = va_arg(list, int);

		if (num < 0) 
		{
			*count += 1;
		}
		*count += len_num(num);
		handle_number(num);
	} 
	else 
	{
		_putchar('%');
		*count += 1;
		if (*format) 
		{
			_putchar(*format);
			*count += 1;
		}
	}
}


/**
 * _printf - Printf function
 * @format: String charactere.
 * Return: chars printed.
 */
int _printf(const char *format, ...)
{
	int num_chars = 0;
	va_list list;
	va_start(list, format);

	if (!format || format[0] == '\0)
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			handle_format(format, list, &count);
			format++; 
		}
		else
		{
			_putchar(*format);
			format++
			count++;
		}
	}
	va_end(list);
	return (num_chars);
}


