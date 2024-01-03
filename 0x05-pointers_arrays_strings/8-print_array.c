#include "main.h"
/**
 * print_array - function that prints n elements of an array of intergers
 * Return: o always
 * @a: array to be used
 * @n: number of elements to be printed
 */

void print_array(int *a, int n)

{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
