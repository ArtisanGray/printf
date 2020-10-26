#include "holberton.h"
/**
* _printf - prints a formatted string
* @format: string to parse subsituted variables from
*
* Return: -1 on fail, length on success
*/
int _printf(const char *format, ...)
{
	int i, j, olen = 0;
	va_list args;
	char *spc; /* specifier string, holds 1-2 characters */

	va_start(args, format);

	for (i = 0; format && format[i] != '\0'; i++) /* loops through string */
	{
		if (format[i] == '%') /* hits escape character */
		{
			if (format[i + 2] != '\0') 
			/**
			* this can probably be changed later to be shorter, but this detects either a 1 or 2
			* character specifier, and mallocs a temporary string to pass to another function
			*
			*/
			{
				spc = malloc(sizeof(char) * 2);
				if (spc == NULL)
					return (-1);
				for (j = 0; j < 2; j++, i++)
					spc[j] = format[i];
				spec_handler(args, spc);
			}
			else if (format[i + 1] != '\0')
			{
				spc = malloc(sizeof(char) * 1);
				if (spc == NULL)
					return (-1);
				spc[0] = format[i];
				i++;
				spec_handler(args, spc);
			}
		} /* if a specifier isnt passed, it just prints the character*/
		_putchar(format[i]);
	}
	olen += i; /* since printf has a default return value of its length, overall length (from return of handler) is added to by the number of character printed*/
	va_end(args);
	return(olen);
}
