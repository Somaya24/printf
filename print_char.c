#include "main.h"
/**
 * print_char - print char.
 * @list: va_list.
 *
 * Return: 1
 */
int print_char(va_list list)
{
	int c;

	c = va_arg(list, int);

	_putchar(c);

	return (1);
}
