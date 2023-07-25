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
	char c;
	char *s;
        va_list list;
        if(!format || format[0] == '\0')
                return (-1);
        va_start (list, format);
        
        
        while (*format)
	{
		if(*format == "%")
                {
                        format++;
                        switch (*format)
                        {
                                case 'c':
                                {
                                        char c = va_arg(list, int);
                                        num_chars = num_chars + _putchar(c);
                                        break;
                                }
                                case 's':
                                {
                                        const char *str = va_arg(list, const char *);
                                        num_chars = num_chars + handle_string(str);
                                        break;
                                }
				case '%':
                                {
                                        _putchar('%');
                                        num_chars++;
                                        break;
                                }
                                case 'd':
                                case 'i':
                                {
                                        int num = va_arg(list, int);
                                        if (num < 0)
                                        {
                                                num_chars++;
                                        }
                                        num_chars = num_chars + len_num(num);
                                        handle_number(num);
                                        break;
                                }
				default:
                                {
                                        _putchar('%');
                                        num_chars++;
                                        if (*format)
                                        {
                                                _putchar(*format);
                                                num_chars++;
                                        }
                                        break;
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
return num_chars;

}

