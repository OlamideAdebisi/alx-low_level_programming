#include "main.h"
/**
 * print_numbers - prints numbers from zero to nine
 */
void print_numbers(void)
{
int y;
for (y = 0; y < '10'; y++)
{
_putchar(y + '10');
_putchar('\n');
}
return (0);
}
