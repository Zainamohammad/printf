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
	int ch;
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	for (; *format != '\0'; format++)
	{
		if (*format != '%')
			i = i + _putchar(48 + *format);
		else
		{
			format++;
			if (*format == '%')
				i = i + _putchar('%');
			if (*format == 'c')
				i = i + print_c(args);
			if (*format == 's')
				i = i + print_s(args);
			if (*format == 'd' || *format == 'i')
				i = i + print_int(args);
			else
				i = i + _putchar('%') + _putchar(48 + *format);
		}
	}

	va_end(args);
	return (i);
}
