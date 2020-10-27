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
 *_print_rev_recursion - function that prints a string in reverse
 *@s: the string
 *
 *
 *Return: void
 */
int _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return(_strlen(s));

	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
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
