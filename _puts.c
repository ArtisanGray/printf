#include "holberton.h"
/**
 * _puts - Function that prints a string
 * @args: The pointer that leads to the string
 *
 * Return: The length of the string
 */
int _puts(va_list args)
{
	int i = 0;
	char *tmp = va_arg(args, char *);

	if (tmp == NULL)
		return (0);
	while (tmp[i] != '\0')
	{
		_putchar(tmp[i]);
		i++;
	}
	return (i);
}
