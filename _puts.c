#include "holberton.h"
/**
 *_puts - Function that prints a string
 *@args: The pointer that leads to the string
 *
 *Return: The length of the string
 */
int _puts(va_list(args))
{
	int i;
	char *tmp = va_arg(args, char *);

	while (tmp[i] != '\0')
	{
		_putchar(tmp[i]);
		i++;
	}
	return (i);
}
