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
	char *temp;

	while(spec != NULL && spec[i] != '\0')
	{
		switch(spec[i])
		{
		case 'c':
		{
			_putchar(va_arg(spec[i]));
			olen++;
			break;
		}
		case 's':
			_puts(args);
			break;
		case 'i':
			/* _int */
			break;
		case 'd':
			/* _decimal */
			break;
		case '%':
			_putchar('%');
			break;

		default:
			break;
		}
	}
	return (olen);
}
