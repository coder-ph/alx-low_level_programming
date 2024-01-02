#include "main.h"
/**
*print_rev - printing string in reverse
*@s: variable holding the string
*Return: o success
*/
void print_rev(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	for (i = count - 1 ; i >= 0 ; i--)
		_putchar(s[i]);
	_putchar('\n');
}
