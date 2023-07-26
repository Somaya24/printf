#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
int printIntegers(const char *format, ...);
static int convertIntToString(int num, char *buffer);
/**
  * convertIntToString - converts an integer to a string and writes to buffer
  * @num: the integer to convert
  * @buffer: the buffer to store the string representation
  * Return: the length of the string
  */
static int convertIntToString(int num, char *buffer)
{
int length = 0;
if (num == 0)
{
buffer[length++] = '0';
}
else if (num < 0)
{
buffer[length++] = '-';
num = -num;
}
int i;

while (num != 0)
{
int digit = num % 10;
buffer[length++] = digit + '0';
num /= 10;
}
for (i = 0; i < length / 2; i++)
{
char temp = buffer[i];
buffer[i] = buffer[length - i - 1];
buffer[length - i - 1] = temp;
}
return (length);
}
#endif /* MAIN_H */
