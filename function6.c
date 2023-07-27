#include "main.h"

/**
 * print_num - converts a string to an integer
 * @i: variadic argument brought from printf function
 * Return: seccess
 */
int print_num(va_list i)
{
int n = va_arg(i, int);
unsigned int hi;
int length = 0;

if (n < 0)
{
_putchar('-');
dino = -n;
length++;
}
else
{
hi = n;
}
if (dino / 10 != 0)
length += print_num_helper(dino / 10);

_putchar(dino % 10 + '0');
length++;

return (length);
}

/**
 * print_num_helper - recursive helper function
 * @dino: the number that we want to print
 * Return: success
 */
int print_num_helper(unsigned int dino)
{
int length = 0;

if (dino / 10 != 0)
length += print_num_helper(dino / 10);

_putchar(dino % 10 + '0');
length++;

return (length);
}
