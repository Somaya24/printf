#include "main.h"
#include <stdarg.h>
/**
  * printIntegers - print the number
  * @format: i or d
  * Return: the number of characters
  */
int printIntegers(const char *format, ...)
{
int count = 0;
va_list args;
va_start(args, format);

while (*format != '\0')
{
if (*format == '%')
{
format++;
if (*format == 'i' || *format == 'd')
{
int num = va_arg(args, int);
char buffer[20];
int length = convertIntToString(num, buffer);
write(1, buffer, length);
count++;
}
}
else
{
write(1, format, 1);
}
format++;
count++;
}
va_end(args);
return (count);
}
