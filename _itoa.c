#include "holberton.h"
/**
* _itoa - prints an integer
* @args: argument list
* Return: overall length of what has been printed
*/
int _itoa(va_list args)
{
	int div = 1000000000, flippy = 0, olen = 0, n;

	n = va_arg(args, int);

	if (n < 0)
	{
		if (n == INT_MIN)
		{
			flippy = 1;
			n++;
		}
		_putchar('-');
		olen++;
		n = -n;
	}
	while (div / 10 != 0)
	{
		if (n / div != 0)
		{
			_putchar('0' + ((n / div) % 10));
			olen++;
		}
		div /= 10;
	}
	_putchar('0' + (flippy == 1 ? 8 : n % 10));
	olen++;
	return (olen);
}
/**
* _uitoa - prints an unsigned integer
* @args: argument list passed from _printf
*
* Return: 0 or length printed
*/
int _uitoa(va_list args)
{
	unsigned int div = 1000000000, n;
	int len = 0;

	n = va_arg(args, unsigned int);
	while (div / 10 != 0)
	{
		if (n / div != 0)
			_putchar('0' + ((n / div) % 10));
		div /= 10;
		len++;
	}
	_putchar('0' + n % 10);
	len++;
	return (len);
}
