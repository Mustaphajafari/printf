#include "main.h"

/**
 * print_rr - prints a string encrypted with rr
 * @R: the variadic argument brought from printf function
 * Return: amount of characters printed
 */
int print_rr(va_list R)
{
char *s = va_arg(R, char *);
int len = 0;

if (s == NULL)
s = "(null)";

char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rr []= "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (int i = 0; s[i] != '\0'; i++)
{
char c = s[i];
char *found = strchr(alphabet, c);

if (found)
{
int index = found - alphabet;
c = rr[index];												            }

_putchar(c);
len++;
}
return (len);
}
