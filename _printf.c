#include "holberton.h"
/**
* _printf - prints a formatted string
* @format: string to parse subsituted variables from
*
* Return: -1 on fail, length on success
*/
int _printf(const char *format, ...)
{
	int i, olen = 0, match = 0;
	va_list args;/* specifier string, holds 1-2 characters */

	va_start(args, format);
	if (format == NULL)
		return (0);
	for (i = 0; format[i] != '\0'; i++) /* loops through string */
	{
		if (format[i] == '%') /* hits escape character */
		{
			if (format[i + 1] != '\0')
			{
				match += 2;
				olen += spec_handler(args, format[i + 1]);
				i += 2;
			}
			if (format[i + 1] == '%')
			{
				i++;
				match++;
			}
		} /* if a specifier isnt passed, it just prints the character*/
		if (format[i] != '\0')
			_putchar(format[i]);
		else
			break;
	}
	olen += i;
	va_end(args);
	return (olen - match);
}
