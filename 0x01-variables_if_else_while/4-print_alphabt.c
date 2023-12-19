#include <stdio.h>
/**
 * main - start of our program
 * Return: 0, success
*/
int main(void)
{
	char a;

	a = 'c';
	while
		(a <= 'z') {
			if ((a != 'q' && a != 'e') && a <= 'z')
				putchar(a);
			a++;
		}
	putchar('\n');
	return (0);
}
