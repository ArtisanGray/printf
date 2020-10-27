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
				if (!temp)
					return (-1);
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
				olen -= 1;
				break;
			case 'r':
				temps = va_arg(args, char *);
				if (!temps)
					return (-1);
				olen = print_rev(temps);
				break;
			case 'R':
				temps = va_arg(args, char *);
				if (!temps)
					return (-1);
				olen = _puts(rot(temps));
				break;
			default:
				_putchar(spec);
				olen++;
				break;
		}
	return (olen);
}
