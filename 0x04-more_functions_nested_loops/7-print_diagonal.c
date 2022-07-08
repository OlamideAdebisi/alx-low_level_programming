#include "main.h"
/**
 * print_diagonal - draws a slash onthe terminal
 * @n: number of times to print
 */
void print_diagonal(int n)
{
int a;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (a = 0; a < n; a++)
{
_putchar('\\');
}
_putchar('\n');
}
}
