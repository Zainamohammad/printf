nclude "main.h"
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
 * print_s - a function to print a string
 *
 * @arg: a list of arguments
 *
 * Return: returns the number of printed characters
 */
int print_s(va_list arg)
{
	char *s;

	s = va_arg(arg, char *);
	if (s == NULL)
		s = "(null)";
	write(1, s, _strlen(s));
	return (_strlen(s));
}
/**
 * print_c - a function to print a character argument
 *
 * @arg: a list of arguments
 *
 * Return: 1
 */
int print_c(va_list arg)
{
	char ch;

	ch = va_arg(arg, int);
	write(1, &ch, 1);
	return (1);
}
/**
 * _putchar - writes the character c to stdout
 *
 * @c: The character to print
 *
 * Return:1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
