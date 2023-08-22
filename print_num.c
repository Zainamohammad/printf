#include "main.h"
/**
 * print_int - a function to print number
 *
 * @args: the list of arguments
 *
 * Return: number of digits
 */
int print_int(va_list args)
{
	int i = 0, ch;
	unsigned int num, q, x = 1;

	ch = va_arg(args, int);
	if (ch == 0)
	{
		_putchar(48);
		++i;
	}
	if (ch != 0)
	{
		if (ch < 0)
		{
			_putchar('-');
			num = ch * (-1);
			++i;
		}
		else
			num = ch;

		for (; num / x != 0; ++i)
			x = x * 10;
		x = x / 10;
		for (; x; x = x / 10)
		{
			q = num % x;
			num = num / x;
			_putchar(48 + num);
			num = q;
		}
	}
	return (i);
}
