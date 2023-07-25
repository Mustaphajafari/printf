#include <stdio.h>
#include "main.h"
#include <stdarg.h>
/**
  * handle_string_format - helper function
  * @list: va_list
  * Return: function
  */
int handle_string_format(va_list list)
{
	const char *str = va_arg(list, const char *);

	return (handle_string(str));
}
/**
  * handle_char_format - Helper function to handle %c format specifier
  * @list: va_list
  * Return: putchar
  */
int handle_char_format(va_list list)
{
	char c = va_arg(list, int);

	return (_putchar(c));
}

/**
  * handle_decimal_format - helper function
  * @list: va_list
  * Return: num_chars
  */
int handle_decimal_format(va_list list)
{
	int num = va_arg(list, int);
	int num_chars = 0;

	if (num < 0)
	{
		num_chars++;
	}
	num_chars += len_num(num);
	handle_number(num);
	return (num_chars);
}

/**
  * handle_format - Helper function to handle format specifier
  * @format: string characters
  * @list: va_list
  * Return: num_chars
  */
int handle_format(const char *format, va_list list)
{
	int num_chars = 0;

	switch (*format)
	{
		case 'c':
			num_chars = num_chars + handle_char_format(list);
			break;
		case 's':
			num_chars = num_chars + handle_string_format(list);
			break;
		case '%':
			num_chars = num_chars + _putchar('%');
			break;
		case 'd':
		case 'i':
			num_chars = num_chars + handle_decimal_format(list);
			break;
		default:
			num_chars = num_chars + _putchar('%');
			if (*format)
			{
				num_chars = num_chars + _putchar(*format);
			}
			break;
	}
	return (num_chars);
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

	if (format == '\0')
		return (-1);
	va_start(list, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			num_chars = num_chars + handle_format(format, list);
		}
		else
		{
			num_chars = num_chars + _putchar(*format);
		}
		format++;
	}
	va_end(list);
	return (num_chars);
}


