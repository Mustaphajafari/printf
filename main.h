#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
int _printf(const char *format, ...);
int handle_number(int num);
int len_num(int num);
int handle_string(char *str);
int handle_format(const char *format, va_list list);
int handle_char_format(va_list list);
int handle_string_format(va_list list);
int handle_decimal_format(va_list list);

#endif
