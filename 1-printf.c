#include "main.h"
/**
 * _strlen - a function that prints the length of
 * a string
 *
 * @s: the string the length of which is to be calculated
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i, count = 0;

	for (i = 0; s[i] != '\0'; ++i)
		++count;
	return (count);
}
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
	char *s;
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	for (; *format != '\0'; format++)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			++i;
		}
		else
		{
			format++;
			if (*format == '%')
				write(1, format, 1);
			if (*format == 'c')
			{
				ch = va_arg(args, int);
				write(1, &ch, 1);
			}
			if (*format == 's')
			{
				s = va_arg(args, char *);
				write(1, s, _strlen(s));
				i = i + _strlen(s);
			}
			if (*format == 'd' || *format == 'i')
				i = i + print_int(args) - 1;
			++i;
		}
	}

	va_end(args);
	return (i);
}
