#include "holberton.h"
#include <stdio.h>
/**
* spec_handler - handles the correct functions to be called based on specifier
* @args: argument list
* @spec: specifier character
*
* Return: length value of what's been printed top stdout
*/
int spec_handler(va_list args, char spec)
{
	int olen = 0;
	char temp;
	char *temps;

		switch (spec)
		{
			case 'c':
				temp = va_arg(args, int);
				_putchar(temp);
				olen++;
				break;
			case 'u':
				olen = _uitoa(args);
				break;
			case 'i':
				olen = _itoa(args);
				break;
			case 'd':
				olen = _itoa(args);
				break;
			case 's':
				olen = _puts(args);
				break;
			case 'r':
				temps = va_arg(args, char *);
				if (!temps)
					return (-1);
				olen = print_rev(temps);
			case 'S':
				olen = _puts(args);
				break;
			case 'R':
				olen = rot13(args);
			default:
				_putchar(spec);
				olen++;
		}
	return (olen);
}
