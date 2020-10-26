#include "holberton.h"
#include <stdio.h>
/**
*
*
*
*/
int spec_handler(va_list(args), char *spec)
{
	int olen;
	char *stupid;
	int stupid2;

	stupid = spec;
	stupid2 = va_arg(args, int);
	printf("stupid2 has the value of %d, and stupid is %s\n", stupid2, stupid);
	/*dummy solution for the c ompiler to be happy*/

	/*this function should contain a switch statement*/
	return (0);
}
