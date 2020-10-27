#include "holberton.h"
/**
 *_strlen - gives the length of a array using a loop
 *@s: is the value we are given
 *
 *Return: n the desired length of our string
 */
int _strlen(char *s)
{
	int n;

	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}
	return (n);
}
/**
 *print_rev - print a string in reverse
 *@s: the pointer given to print
 *
 *Return: n the length 
*/
int print_rev(char *s)
{
	int i, n = _strlen(s);

	for (i = n - 1; i > 0; i--)
	{
		_putchar(s[i]);
	}
	return (n);
}
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
