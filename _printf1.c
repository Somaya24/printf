#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
* @count : numbers of char printed
* _printf - _printf function
* @format : Format
* Return: char printed.
*/
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			count++;
		} else
		{
			format++;
			if (*format == '\0')
				break;
			if (*format == '%')
			{
				write(1, format, 1);
				count++;
			} else if (*format == 'c')
			{
				char c = va_arg(args, int);

				write(1, &c, 1);
				count++;
			} else if (*format == 's')
			{
				char *str = va_arg(args, char*);
				int str_len = 0;

				while (str[str_len] != '\0')
					str_len++;
				write(1, str, str_len);
				count += str_len;
			}
		} format++;
	} va_end(args);
	return (count);
}
