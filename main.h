#ifndef MY_HEADER
#define MY_HEADER
#include <limits.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
int _printf(const char *format, ...);
int print_int(va_list args);
#endif
