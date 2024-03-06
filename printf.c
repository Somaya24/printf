#include "main.h"

int _printf(const char *format, ...)
{
	int counter = 0, ch, i;
	va_list ap;

	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
			{
				_putchar('%');
				counter++;
			}
			else
			{
				if(*format == 'c'){
					ch = va_arg(ap, int);
					_putchar(ch);
					counter++;
				}
				if (*format == 's'){
					const char *str = va_arg(ap, const char*);
					if (str == NULL)
						str = "(null)";
					for (i = 0; str[i] != '\0'; i++){
						_putchar(str[i]);
						counter++;
					}
				}
			}
		}
		else
		{
			_putchar(*format);
			counter++;
		}
		format++;
	}
	va_end(ap);
	return (0);
}
