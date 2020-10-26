#include "holberton.h"
#include <stdio.h>
/**
*
*
*
*
*/
int main(void)
{
	int a = 0;
        int b = 0;
        int c = 0;
        int d = 0;
        printf("this is a test string\n");
        _printf("this is a test string\n");
        b = printf("this is a test string: %s\n", "beans");
        a = _printf("this is a test string: %s\n", "beans");
        printf("Printf(knockoff version returned %d, while the real printf returned %d\n", a, b);
        c = _printf("This is a character: %c\n", 'b');
        d = printf("This is a character: %c\n", 'b');
        printf("Printf(knockoff version returned %d, while the real printf returned %d\n", c, d);
        return (0);
}
