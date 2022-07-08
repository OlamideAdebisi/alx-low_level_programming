#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: number of times character shold be printed
 * Return: always return 0 if zero or less
 */
void print_line(int n)
{
int y;
if (n > 0)
{
for (y = 0; y <= n; y++)
{
_putchar('_');
}
_putchar('\n');
}
}
