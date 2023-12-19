#include <stdio.h>
/**
 * main - this is the entry point of our program
 * Return: 0, success
*/
int main(void)
{
	char c;
	int d;

	c = 'a';
	d = 0;
	for (d = 0; d < 10; d++)
	{
		putchar(d + '0');
	}
	while
		(c <= 'f') {
			putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
