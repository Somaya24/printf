#include "main.h"

void print_str(const char *str, int *counter)
{
	int i;
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		counter++;
	}
}
