#include "main.h"                                                                                                       /**                                                                                                                     *print_rev - printing string in reverse                                                                                 *@s: variable holding the string                                                                                        *Return: o success                                                                                                      *rev_string - reverses a strin
*/

void rev_string(char *s)
{
	int i;
	char j;
	int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		count++;
	for (i = 0 ; i < count / 2 ; i++)
	{
		j = s[i];
		s[i] = s[count - 1 - i];
		s[count - 1 - j] = j;
	}
}
