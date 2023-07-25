#include "main.h"
#include <stdio.h>

/**
 * handle_string - Prints a string or "null" if str is NULL.
 * @str: The string to be printed.
 *
 * Return: The number of characters printed.
 */

int handle_string(const char *str)
{
	int i = 0;

	if (str == NULL)
	{
		const char *null_str = "null";
		int i = 0;

		while (null_str[i])
		{
			_putchar(null_str[i]);
			i++;
		}
		return (i);
	}
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}

/**
 * len_num - Calculates the length of an integer.
 * @num: The input integer.
 *
 * Return: The number of digits in the integer.
 */

int len_num(int num)
{
	int count = 0;

	if (num == 0)
		return (1);
	if (num < 0)
	{
		count++;
		num = -num;
	}
	while (num != 0)
	{
		count++;
		num /= 10;
	}
	return (count);
}

/**
 * handle_number - Prints an integer.
 * @num: The integer to be printed.
 *
 * Return: Always 1.
 */

int handle_number(int num)
{
	if (num == -2147483648)
	{
		_putchar('-');
		num = -num;
	}
	if (num >= 10)
	{
		handle_number(num / 10);
		handle_number(num % 10);
	}
	else
	{
		_putchar(num + 48);
	}
	return (1);
}














