#include "main.h"

/**
 * print_reverse - prints a string in reverse
 * @r: the variadic argument brought from printf function
 * Return: amount of characters printed
 **/
int print_reverse(va_list r)
{
char *s = va_arg(r, char *);

if (s == NULL)
s = "(null)";

int lenr = 0;
while (s[lenr] != '\0')
lenr++;

for (int i = lenr - 1; i >= 0; i--)
{
_putchar(s[i]);
}

return (lenr);
}
