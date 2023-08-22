fndef MY_HEADER
#define MY_HEADER
#include <limits.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
int _printf(const char *format, ...);
int print_int(va_list args);
int print_s(va_list arg);
int print_c(va_list arg);
int _putchar(char c);
int _strlen(char *s);
#endif
