#include <stdio.h>
/**
 * main - entry point
 * Return: Always 0 success
 */
int main(void)
{
	int i;
	long int l;
	long long int ll;
	float d;
	char c;

	printf("size of an int: %d byte(s)\n", sizeof(i));
	printf("size of a long int: %d byte(s)\n", sizeof(l));
	printf("size of a long long int: %d byte(s)\n", sizeof(ll));
	printf("size of a float: %d byte(s)\n", sizeof(d));
	printf("size of a char: %d byte(s)\n", sizeof(c));
	return (0);
}
