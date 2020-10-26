#include "holberton.h"
#include <stdio.h>
/**
*
*
*
*/
int spec_handler(va_list(args), char *spec)
{
	int olen = 0;

		switch(spec[0])
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
				/* _int */
				break;
			case 'd':
				/* _decimal */
				break;
			case '%':
				_putchar('%');
				olen++;
				break;
			default:
				break;
		}
	return (olen);
}
