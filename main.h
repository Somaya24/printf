#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

int _printf(const char *format, ...);
void print_Int(const char *format, ...);
int print_binary(va_list list);
int print_bnr(va_list arguments, char *buf, unsigned int ibuf);








#endif  /* MAIN_H */
