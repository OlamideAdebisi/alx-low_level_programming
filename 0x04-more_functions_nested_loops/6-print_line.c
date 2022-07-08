#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: number of times character shold be printed
 */
void print_line(int n)
{
int y;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (y = 0; y < n; y++)
{
_putchar('_');
}
_putchar('\n');
}
}
