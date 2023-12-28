#include "main.h"
/**
* _islower - a function for checking lower characters
* main: program entry point
* @c: parameter to be checked
* Return: 0 or 1
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

