#include "holberton.h"
/**
* _printf - prints a formatted string
* @format: string to parse subsituted variables from
*
* Return: -1 on fail, length on success
*/
int _printf(const char *format, ...)
{
	int i, olen = 0;
	va_list args;
	char *spc; /* specifier string, holds 1-2 characters */

	va_start(args, format);

	for (i = 0; format && format[i] != '\0'; i++) /* loops through string */
	{
		if (format[i] == '%') /* hits escape character */
		{
			if (format[i + 1] != '\0')
			{
				spc = malloc(sizeof(char) * 1);
				if (spc == NULL)
					return(-1);
				spc[0] = format[i + 1];
				olen += spec_handler(args, spc);
				i += 2;
			}
		} /* if a specifier isnt passed, it just prints the character*/
		_putchar(format[i]);
	}
	olen += i; /* since printf has a default return value of its length, overall length (from return of handler) is added to by the number of character printed*/
	va_end(args);
	return(olen - 1);
}
