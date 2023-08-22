#include "main.h"
/**
 * _printf - a function that produces output according
 * to a format
 *
 * @format: a character string
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0;
	va_list args;

	va_start(args, format);

	if (format == NULL)
		return (-1);
	for (; *format != '\0'; format++)
	{
		if (*format != '%')
			i = i + _putchar(*format);
		else
		{
			format++;
			if (*format == '%')
				i = i + _putchar(*format);
			else if (*format == 'c')
				i = i + print_c(args);
			else if (*format == 's')
				i = i + print_s(args);
			else if (*format == 'd' || *format == 'i')
				i = i + print_int(args);
			else
				i = i + _putchar('%') + _putchar(*format);
		}
	}

	va_end(args);
	return (i);
}
