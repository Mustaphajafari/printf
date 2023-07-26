#include <stdio.h>
#include "main.h"
#include <stdarg.h>


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

	if (!format || format[0])
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				char c = va_arg(list, int);

				num_chars = num_chars + _putchar(c);
			}
			else if (*format == 's')
			{
				char *str = va_arg(list, char *);

				num_chars = num_chars + handle_string(str);
			}
			else if (*format == '%')
			{
				_putchar('%');
				num_chars++;
			}
			else if (*format == 'd' || *format == 'i')
			{
				int num = va_arg(list, int);

				if (num < 0)
				{
					_putchar('-');
					num = -num;
				}
				num_chars = num_chars + len_num(num);
				handle_number(num);
			}
			else
			{
				_putchar('%');
				num_chars++;
				if (*format)
				{
					_putchar(*format);
					num_chars++;
				}
			}
			format++;
		}
		else
		{
			_putchar(*format);
			format++;
			num_chars++;
		}
	}
	va_end(list);
	return (num_chars);
}


