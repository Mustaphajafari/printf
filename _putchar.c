#include <unistd.h>
/**
 * _putchar - put character
 *@c: I dont know
 * Return: success
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
