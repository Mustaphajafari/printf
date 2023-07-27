#include "main.h"

/**
 * print_number - converts a string to an integer
 * @i: variadic argument brought from printf function
 * Return: seccess
 */
int print_number(va_list i)
{
int n = va_arg(i, int);
unsigned int hi;
int length = 0;

if (n < 0)
{
_putchar('-');
hi = -n;
length++;
}
else
{
hi = n;
}
if (hi / 10 != 0)
length += print_number_helper(hi / 10);

_putchar(hi % 10 + '0');
length++;

return (length);
}

/**
 * print_number_helper - recursive helper function
 * @hi: the number that we want to print
 * Return: success
 */
int print_number_helper(unsigned int hi)
{
int length = 0;

if (hi / 10 != 0)
length += print_number_helper(hi / 10);

_putchar(hi % 10 + '0');
length++;

return (length);
}
