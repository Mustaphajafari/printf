#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <string.h>


/**
 * struct special_cases - the definition of a new structure named special_cases
 * @match: member will store the format specifier string
 * @function:member will store a pointer to the function
 * @
 **/

typedef struct special_cases
{
char *match;
int (*function)(va_list);
} spc_t;



int _putchar(char c);
int print_num_helper(unsigned int dino);
int print_num(va_list i);
int print_rev(va_list r);
int print_rr(va_list R);

int handle_string(va_list s);
int handle_char(va_list c);
int handle_unsigned(va_list u);
int (*character_s(const char *suivant, int dino))(va_list);
int _printf(const char *format, ...);



#endif
