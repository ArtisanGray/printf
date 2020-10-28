#include "holberton.h"
/**
 * rot13 - rotates the cipher of a string by 13
 * @args: string pointer to be rotated
 *
 * Return: rotated string
 */
int rot13(va_list args)
{
	int i, j;
	char *temp = va_arg(args, char *);
	char *alp = "abcdefghijklmnopqrstuvxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *nyc = "nopqrstuvwxyzabcdefghiklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	if (temp == NULL)
		return (-1);
	for (i = 0; temp[i] != '\0'; i++)
	{
		for (j = 0; alp[j] != '\0'; j++)
		{
			if (temp[i] == alp[j])
			{
				_putchar(nyc[j]);
				break;
			}
		}
	}
	return (i - 1);
}
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

	for (i = n; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	return (n + 1);
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
