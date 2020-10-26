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

		switch (spec)
		{
			case 'c':
				_putchar(va_arg(args, int));
				olen++;
				break;
			case 's':
				olen = _puts(args);
				olen -= 1;
				break;
			case 'i':
				olen = _itoa(args);
				break;
			case 'd':
				olen = _itoa(args);
				break;
			case '%':
				olen++;
				break;
			default:
				break;
		}
	return (olen);
}
