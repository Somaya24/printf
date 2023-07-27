#include "main.h"

/**
 * itoa - integer to ascii
 * @num: num
 * @base: base
 *
 * Return: char
 **/
char *itoa(long int num, int base)
{
	static char *array = "0123456789abcdef";
	static char buffer[50];
	char sign = 0;
	char *p;
	unsigned long n = num;

	if (num < 0)
	{
		n = -num;
		sign = '-';
	}
	p = &buffer[49];
	*p = '\0';

	do      {
		*--p = array[n % base];
		n /= base;
	} while (n != 0);

	if (sign)
		*--p = sign;
	return (p);
}
