#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @r: the variadic argument brought from printf function
 * Return: amount of characters printed
 **/
int print_rev(va_list r)
{
char *s = va_arg(r, char *);
int lenr = 0;
int i;


if (s == NULL)
s = "(null)";



while (s[lenr] != '\0')
lenr++;

for (i = lenr - 1; i >= 0; i--)
{
_putchar(s[i]);
}

return (lenr);
}
