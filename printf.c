#include "main.h"

int _printf(const char *format, ...)
{
	int counter = 0, ch;
	va_list ap;

	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
				_putchar('%'), counter++;
			else
			{
				if(*format == 'c'){
					ch = va_arg(ap, int);
					_putchar(ch), counter++;
				}
				if (*format == 's'){
					const char *str = va_arg(ap, const char*);
					if (str == NULL)
						str = "(null)";
					print_str(str, &counter);
				}
			}
		}
		else
			_putchar(*format), counter++;
		format++;
	}
	va_end(ap);
	return (0);
}
