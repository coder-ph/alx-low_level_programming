#include <stdio.h>
/**
 * main - this program prints the size of various types
 * Return: (0) success
 */
int main(void)
{
printf("Size of a char: %zu bytes(s)\n", sizeof(char));
printf("Size of a int: %zu bytes(s)\n", sizeof(int));
printf("Size of a long int: %zu bytes(s)\n", sizeof(long int));
printf("Size of a long long int: %zu bytes(s)\n", sizeof(long long int));
printf("Size of a float: %zu bytes(s)\n", sizeof(float));
return (0);
}
